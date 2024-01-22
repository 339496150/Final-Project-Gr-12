#include <iostream>
#include <string>
#include <vector>
#include "Blackjack.hpp"

#pragma once

using namespace std;

class Hero
{
    protected:
    int health = 100;
    int damage = 20;
    bool haveKey = false;

    public:
    void setHealth(int healthIn)
    {
        health = healthIn;
    }

    int getHealth()
    {
        return health;
    }

    void setDamage(int damageIn)
    {
        damage = damageIn;
    }

    int getDamage()
    {
        return damage;
    }

    void getKey(bool keyIn)
    {
        haveKey = keyIn;
    }

    bool keyCheck()
    {
        return haveKey;
    }
};

class MiniBoss
{
    protected:
    bool dragonKilled = false;

    public:
    int health = 30;
    int damage = 20;

    void dragonDead(bool killedIn)
    {
        dragonKilled = killedIn;
    }

    bool killedDragon()
    {
        return dragonKilled;
    }

    void dragonBlackjack(Hero &hero) 
    {
        char choice;
        cin.ignore(256, '\n');
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


        while (choice != 's')
        {
            cout << "Do you want to hit (h) or stand (s)? ";
            cin >> choice;

            if (choice == 'h') 
            {
                player.addCard(deck.dealCard());
                cout << "Your hand:" << endl;
                player.displayHand();

                if (player.getTotalScore() > 21) 
                {
                    cout << "You missed" << endl;
                    cout << "Sami's turn!" << endl;
                    cout << "Sami attacked you for 20 damage" << endl;
                    hero.setHealth(hero.getHealth() - damage);
                    break;
                }
            }

        }

        //Dealer turn
        cout << "Dealer's hand:" << endl;
        dealer.displayHand();

        while (dealer.getTotalScore() < 17) 
        {
            dealer.addCard(deck.dealCard());
            cout << "Dealer hit" << endl;
        }

        cout << "Dealer's hand:" << endl;
        dealer.displayHand();

        //Check for win
        if (dealer.getTotalScore() > 21 || (player.getTotalScore() <= 21 && player.getTotalScore() > dealer.getTotalScore())) 
        {
           cout << "You managed to hit Sami" << endl;
            health -= hero.getDamage();
            if (health <= 0) 
            {
                dragonDead(true);
                cout << "You have killed Sami." << endl;
                cout << "You feel more confident after killing the dragon" << endl;
                cout << "Your new attack strength is 30" << endl;
                hero.setDamage(30);
            }
            cout << "Sami's turn!" << endl;
            cout << "Sami attacked you for 20 damage" << endl;
            hero.setHealth(hero.getHealth() - damage);
        } 
        else 
        {
            cout << "You missed" << endl;
            cout << "Sami's turn!" << endl;
            cout << "Sami attacked you for 20 damage" << endl;
            hero.setHealth(hero.getHealth() - damage);
        }
    }
};

class Boss
{
    protected:
    bool cthulhuKilled = false;

    public:
    int health = 50;
    int damage = 25;

    void cthulhuDead(bool killedIn)
    {
        cthulhuKilled = killedIn;
    }

    bool killedCthulhu()
    {
        return cthulhuKilled;
    }

    void bossBlackjack(Hero &hero) 
    {
        char choice;
        cin.ignore(256, '\n');
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


        while (choice != 's')
        {
            cout << "Do you want to hit (h) or stand (s)? ";
            cin >> choice;

            if (choice == 'h') 
            {
                player.addCard(deck.dealCard());
                cout << "Your hand:" << endl;
                player.displayHand();

                if (player.getTotalScore() > 21) 
                {
                    cout << "You missed" << endl;
                    cout << "Cthulhu's turn!" << endl;
                    cout << "Cthulhu attacked you for 25 damage" << endl;
                    hero.setHealth(hero.getHealth() - damage);
                    heroKilled(hero);
                    break;
                }
            }

        }

        //Dealer turn
        cout << "Dealer's hand:" << endl;
        dealer.displayHand();

        while (dealer.getTotalScore() < 17) 
        {
            dealer.addCard(deck.dealCard());
            cout << "Dealer hit" << endl;
        }

        cout << "Dealer's hand:" << endl;
        dealer.displayHand();

        //Check for win
        if (dealer.getTotalScore() > 21 || (player.getTotalScore() <= 21 && player.getTotalScore() > dealer.getTotalScore())) 
        {
            cout << "You hit Cthulhu" << endl;
            health -= hero.getDamage();
            if (health <= 0)
            {
                cthulhuDead(true);
            }
        } 
        else 
        {
            cout << "You missed" << endl;
            cout << "Cthulhu's turn!" << endl;
            cout << "Cthulhu attacked you for 25 damage" << endl;
            hero.setHealth(hero.getHealth() - damage);
        }
    }
};

class BaseEnemy
{
    protected:
    bool enemyKilled = false;

    public:
    int health = 20;
    int damage = 5;

    void enemyDead(bool killedIn)
    {
        enemyKilled = killedIn;
    }

    bool killedEnemy()
    {
        return enemyKilled;
    }

    void ghostBlackjack(Hero &hero) 
    {
        char choice;
        cin.ignore(256, '\n');
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


        while (choice != 's')
        {
            cout << "Do you want to hit (h) or stand (s)? ";
            cin >> choice;

            if (choice == 'h') 
            {
                player.addCard(deck.dealCard());
                cout << "Your hand:" << endl;
                player.displayHand();

                if (player.getTotalScore() > 21) 
                {
                    cout << "You missed" << endl;
                    cout << "The ghost attacked you for 5 damage" << endl;
                    hero.setHealth(hero.getHealth() - damage);
                    break;
                }
            }

        }

        //Dealer turn
        cout << "Dealer's hand:" << endl;
        dealer.displayHand();

        while (dealer.getTotalScore() < 17) 
        {
            dealer.addCard(deck.dealCard());
            cout << "Dealer hit" << endl;
        }

        cout << "Dealer's hand:" << endl;
        dealer.displayHand();

        //Check for win
        if (dealer.getTotalScore() > 21 || (player.getTotalScore() <= 21 && player.getTotalScore() > dealer.getTotalScore())) 
        {
            cout << "you managed to get a hit on the enemy" << endl;
                health -= hero.getDamage();
                cout << "You killed the ghost" << endl;
                enemyDead(true);
        } 
        else 
        {
            cout << "You missed" << endl;
            cout << "The ghost attacked you for 5 damage" << endl;
            hero.setHealth(hero.getHealth() - damage);
            heroKilled(hero);
        }
    }
};