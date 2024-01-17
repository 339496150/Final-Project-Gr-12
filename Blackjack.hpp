#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

//Card class definers
class Card {
public:
    enum Rank { ACE = 1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING };
    enum Suit { CLUBS, DIAMONDS, HEARTS, SPADES };

    Card(Rank r, Suit s) : rank(r), suit(s) {}

    int getValue() const {
        if (rank > 10) {
            return 10;
        } else {
            return rank;
        }
    }

    void displayCard() const {
        const char* rankStr[] = { "Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King" };
        const char* suitStr[] = { "Clubs", "Diamonds", "Hearts", "Spades" };

        cout << rankStr[rank - 1] << " of " << suitStr[suit] << endl;
    }

private:
    Rank rank;
    Suit suit;
};

class Deck 
{
public:
    Deck() 
    {
        for (int s = Card::CLUBS; s <= Card::SPADES; ++s) 
        {
            for (int r = Card::ACE; r <= Card::KING; ++r) 
            {
                cards.push_back(Card(static_cast<Card::Rank>(r), static_cast<Card::Suit>(s)));
            }
        }
        shuffleDeck();
    }

    void randomShuffle() {
        int n = cards.size();
        for (int i = n - 1; i > 0; --i) {
            int j = rand() % (i + 1);
            swap(cards[i], cards[j]);
        }
    }

    void shuffleDeck() {
        srand(static_cast<unsigned int>(time(0)));
        randomShuffle();
    }

    Card dealCard() {
        Card dealtCard = cards.back();
        cards.pop_back();
        return dealtCard;
    }

private:
    vector<Card> cards;
};

class Player {
public:
    Player() : totalScore(0) {}

    void addCard(const Card& card) {
        hand.push_back(card);
        totalScore += card.getValue();
    }

    int getTotalScore() const {
        return totalScore;
    }

    void displayHand() const {
        for (const auto& card : hand) {
            card.displayCard();
        }
        cout << "Total: " << totalScore << endl;
    }

private:
    vector<Card> hand;
    int totalScore;
};

int blackjack() {
    Deck deck;
    Player player;
    Player dealer;

    //First deal
    player.addCard(deck.dealCard());
    dealer.addCard(deck.dealCard());
    player.addCard(deck.dealCard());
    dealer.addCard(deck.dealCard());

    //Player turn
    cout << "Your hand:" << endl;
    player.displayHand();

    char choice;
    do {
        cout << "Do you want to hit (h) or stand (s)? ";
        cin >> choice;

        if (choice == 'h') {
            player.addCard(deck.dealCard());
            cout << "Your hand:" << endl;
            player.displayHand();

            if (player.getTotalScore() > 21) {
                cout << "Lose" << endl;
                return 0;
            }
        }

    } while (choice != 's');

    //Dealer turn
    cout << "Dealer's hand:" << endl;
    dealer.displayHand();

    while (dealer.getTotalScore() < 17) {
        dealer.addCard(deck.dealCard());
        cout << "Dealer hit" << endl;
    }

    cout << "Dealer's hand:" << endl;
    dealer.displayHand();

    //Check for win
    if (dealer.getTotalScore() > 21 || (player.getTotalScore() <= 21 && player.getTotalScore() > dealer.getTotalScore())) {
        cout << "You win" << endl;
    } else {
        cout << "Lose" << endl;
    }

    return 0;
}