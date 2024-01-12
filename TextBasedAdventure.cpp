#include <iostream>
#include <string>
#include "Classes.hpp"
#include "Blackjack.hpp"

using namespace std;

// Allows all the functions to call one another
void startingRoom(Player &player, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen);
void roomTwo(Player &player, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen);
void roomThree(Player &player, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen);
void roomMiniBoss(Player &player, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen);
void roomFive(Player &player, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen);
void roomSix(Player &player, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen);
void roomSeven(Player &player, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen);
void roomEight(Player &player, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen);
void roomNine(Player &player, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen);
void roomTen(Player &player, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen);
void roomEleven(Player &player, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen);
void roomTwelve(Player &player, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen);
void roomThirteen(Player &player, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen);
void roomFourteen(Player &player, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen);
void roomFifteen(Player &player, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen);
void roomBoss(Player &player, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen);
void cthulhuFight(Player &player, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen);
void dragonFight(Player &player, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen);
void ghostFiveFight(Player &player, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen);
void ghostElevenFight(Player &player, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen);
void ghostThirteenFight(Player &player, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen);
void playerKilled(Player &player);

// First room
void startingRoom(Player &player, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen) 
{
    char moveRoomOne;
    cout << "Welcome to room 1\n";
    cout << "Walk down to room 5 (S) or walk left to room 2 (A):  ";
    cin >> moveRoomOne;
    moveRoomOne = toupper(moveRoomOne);
    if (moveRoomOne == 'A') 
    {
        roomTwo(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else if (moveRoomOne == 'S') 
    {
        roomFive(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else 
    {
        cout << "There is no door there. Please use your brain.\n";
        startingRoom(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
}

// Room 2
void roomTwo(Player &player, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen) 
{
    char moveRoomTwo;
    cout << "Welcome to room 2\n";
    cout << "Walk down to room 6 (S), walk left to room 3 (A), or walk right to room 1 (D):  ";
    cin >> moveRoomTwo;
    moveRoomTwo = toupper(moveRoomTwo);
    if (moveRoomTwo == 'A') 
    {
        roomThree(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else if (moveRoomTwo == 'D') 
    {
        startingRoom(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else if (moveRoomTwo == 'S') 
    {
        roomSix(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else 
    {
        cout << "There is no door there. please use your brain\n";
        roomTwo(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
}

// Room 3
void roomThree(Player &player, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen) 
{
    char moveRoomThree;
    cout << "Welcome to room 3\n";
    cout << "Walk down to room 7 (S), walk left to room 4 (A), or walk right to room 2 (D):  ";
    cin >> moveRoomThree;
    moveRoomThree = toupper(moveRoomThree);
    if (moveRoomThree == 'A') 
    {
        roomMiniBoss(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else if (moveRoomThree == 'D') 
    {
        roomTwo(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else if (moveRoomThree == 'S') 
    {
        roomSeven(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else 
    {
        cout << "There is no door there. Please use your brain.\n";
        roomThree(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
}

// Room 4 with mini boss
void roomMiniBoss(Player &player, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen)
{
    MiniBoss dragon;
    dragon.deadOrAlive(true);
    char moveRoomFour;
    cout << "Welcome to room 4\n";
    cout << "As you enter the room you see a large dragon resting on the ground, you deside to name it Sami.\n";
    dragonFight(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    cout << "Walk down to room 8 (S) or walk right to room 3 (D):  ";
    cin >> moveRoomFour;
    moveRoomFour = toupper(moveRoomFour);
    if (moveRoomFour == 'S') 
    {
        roomEight(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else if (moveRoomFour == 'D') 
    {
        roomThree(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else 
    {
        cout << "There is no door there. Please use your brain.\n";
        roomMiniBoss(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
}

// Room 5
void roomFive(Player &player, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen) 
{
    BaseEnemy ghostFive;
    ghostFive.deadOrAlive(true);
    char key, moveRoomFive;
    ghostFiveFight(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    if (player.keyCheck() == false) 
    {
        cout << "Welcome to room 5\n";
        cout << "There is a key on the ground pick it up (P) or leave it (L):  ";
        cin >> key;
        key = toupper(key);
        if (key == 'P') 
        {
            cout << "you picked up the key\n";
            player.getKey(true);
        }
        else if (key == 'L') 
        {
            cout << "You chose to leave the key. That wasnt a good choice but ok.\n";
        }
        else 
        {
            cout << "That is an invalid imput\n";
            roomFive(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
        }
    }
    else if (player.keyCheck() == true) 
    {
        cout << "You have already grabbed the key\n";
    }
    cout << "Walk up to room 1 (W), walk down to room 9 (S), or walk left to room 6 (A):  ";
    cin >> moveRoomFive;
    moveRoomFive = toupper(moveRoomFive);
    if (moveRoomFive == 'A') 
    {
        roomSix(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else if (moveRoomFive == 'W') 
    {
        startingRoom(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else if (moveRoomFive == 'S') 
    {
        roomNine(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else 
    {
        cout << "There is no door there. Please use your brain.\n";
        roomFive(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
}

// Room 6
void roomSix(Player &player, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen) 
{
    char moveRoomSix;
    cout << "Welcome to room 6\n";
    cout << "Walk up to room 2 (W), walk down to room 10 (S), walk left to room 7 (A), or walk right to room 5 (D):  ";
    cin >> moveRoomSix;
    moveRoomSix = toupper(moveRoomSix);
    if (moveRoomSix == 'A') 
    {
        roomSeven(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else if (moveRoomSix == 'W') 
    {
        roomTwo(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else if (moveRoomSix == 'S') 
    {
        roomTen(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else if (moveRoomSix == 'D') 
    {
        roomFive(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else 
    {
        cout << "There is no door there. Please use your brain.\n";
        roomSix(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
}

// Room 7
void roomSeven(Player &player, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen) 
{
    char moveRoomSeven;
    cout << "Welcome to room 7\n";
    cout << "Walk up to room 3 (W), walk down to room 11 (S), walk left to room 8 (A), or walk right to room 6 (D):  ";
    cin >> moveRoomSeven;
    moveRoomSeven = toupper(moveRoomSeven);
    if (moveRoomSeven == 'W') 
    {
        roomThree(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else if (moveRoomSeven == 'A') 
    {
        roomEight(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else if (moveRoomSeven == 'S') 
    {
        roomEleven(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else if (moveRoomSeven == 'D') 
    {
        roomSix(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else {
        cout << "There is no door there. Please use your brain.\n";
        roomSeven(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
}

// Room 8
void roomEight(Player &player, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen) 
{
    char healEight, moveRoomEight;
    cout << "Welcome to room 8\n";
    cout << "You see a campfire in the middle of the room.\n";
    cout << "Your health " << player.getHealth() << " HP\n";
    cout << "The campfire's warmpth is comforting to you. Would you like to heal. (Y/N):  ";
    cin >> healEight;
    healEight = toupper(healEight);
    if (healEight == 'Y') 
    {
        player.setHealth(100);
        cout << "You healed to " << player.getHealth() << " HP\n";
    }
    else if (healEight == 'N') 
    {
        cout << "You chose not to heal. Kinda not a big brain play.\n";
    }
    else 
    {
        cout << "That is not one of the options. Please choose one of the options.\n";
        roomEight(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    cout << "Walk up to room 4 (W), walk down to room 16 (S), or walk right to room 7 (D):  ";
    cin >> moveRoomEight;
    moveRoomEight = toupper(moveRoomEight);
    if (moveRoomEight == 'D') 
    {
        roomSeven(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else if (moveRoomEight == 'W') 
    {
        roomMiniBoss(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else if (moveRoomEight == 'S') 
    {
        if (player.keyCheck() == true) 
        {
            roomBoss(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
        }
        else if (player.keyCheck() == false) 
        {
            cout << "You dont have the key to get into this room.\n";
            roomEight(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
        }
    }
    else 
    {
        cout << "There is no door there. Please use your brain.\n";
        roomEight(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
}

// Room 9
void roomNine(Player &player, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen)
{
    char moveRoomNine;
    cout << "Welcome to room 9\n";
    cout << "Walk up to room 5 (W), walk down to room 12 (S), or walk left to room 10 (A):  ";
    cin >> moveRoomNine;
    moveRoomNine = toupper(moveRoomNine);
    if (moveRoomNine == 'A') 
    {
        roomTen(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else if (moveRoomNine == 'W') 
    {
        roomFive(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else if (moveRoomNine == 'S') 
    {
        roomTwelve(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else 
    {
        cout << "There is no door there. Please use your brain.\n";
        roomNine(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
}

// Room 10 THERE IS A TRAP IN THIS ROOM IF YOU TRY TO ENTER ROOM 11
void roomTen(Player &player, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen) 
{
    char healTen, moveRoomTen;
    cout << "Welcome to room 10\n";
    cout << "You see a campfire in the middle of the room.\n";
    cout << "Your health " << player.getHealth() << " HP\n";
    cout << "The campfire's warmpth is comforting to you. Would you like to heal. (Y/N):  ";
    cin >> healTen;
    healTen = toupper(healTen);
    if (healTen == 'Y') 
    {
        player.setHealth(100);
        cout << "You healed to " << player.getHealth() << " HP\n";
    }
    else if (healTen == 'N') 
    {
        cout << "You chose not to heal. Kinda not a big brain play.\n";
    }
    else
    {
        cout << "That is not one of the options. Please choose one of the options.\n";
        roomTen(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    cout << "Walk up to room 6 (W), walk down to room 14 (S), walk left to room 11 (A), or walk back to room 9 (D):  ";
    cin >> moveRoomTen;
    moveRoomTen = toupper(moveRoomTen);
    if (moveRoomTen == 'W') 
    {
        roomSix(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else if (moveRoomTen == 'A') 
    {
        cout << "As you walk through the hall way you see spikes poking out of the wall\n";
        cout << "As you walk past them they activate and you get hit\n";
        cout << "The spikes deal 50 damage\n";
        player.setHealth(player.getHealth() - 50);
        playerKilled(player);
        cout << "You have " << player.getHealth() << "HP.\n\n";
        roomEleven(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else if (moveRoomTen == 'S') 
    {
        roomFourteen(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else if (moveRoomTen == 'D') 
    {
        roomNine(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else 
    {
        cout << "There is no door there. Please use your brain.\n";
        roomTen(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
}

// Room 11
void roomEleven(Player &player, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen) 
{
    BaseEnemy ghostEleven;
    ghostEleven.deadOrAlive(true);
    char moveRoomEleven;
    cout << "Welcome to room 11\n";
    ghostElevenFight(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    cout << "Walk up to room 7 (W), walk down to room 15 (S), walk left to room 16 (A), or walk right to room 10 (D):  ";
    cin >> moveRoomEleven;
    moveRoomEleven = toupper(moveRoomEleven);
    if (moveRoomEleven == 'W') 
    {
        roomSeven(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else if (moveRoomEleven == 'A') 
    {
        if (player.keyCheck() == true) 
        {
            roomBoss(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
        }
        else if (player.keyCheck() == false) 
        {
            cout << "You dont have the key to get into this room\n";
            roomEleven(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
        }
    }
    else if (moveRoomEleven == 'S') 
    {
        roomFifteen(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else if (moveRoomEleven == 'D') 
    {
        roomTen(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else 
    {
        cout << "There is no door there. Please use your brain.\n";
        roomEleven(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
}

// Room 12 THIS ROOM HAS A TRAP IF YOU TRY TO GO TO ROOM 13
void roomTwelve(Player &player, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen) 
{
    char moveRoomTwelve;
    cout << "Welcome to room 12\n";
    cout << "Walk up to room 9 (W), walk down to room 13 (S), or walk left to room 14 (A):  ";
    cin >> moveRoomTwelve;
    moveRoomTwelve = toupper(moveRoomTwelve);
    if (moveRoomTwelve == 'W') 
    {
        roomNine(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else if (moveRoomTwelve == 'A') 
    {
        roomFourteen(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else if (moveRoomTwelve == 'S') 
    {
        cout << "As you walk through the hall way you see spikes poking out of the wall\n";
        cout << "As you walk past them they activate and you get hit.\n";
        cout << "The spikes deal 50 damage\n";
        player.setHealth(player.getHealth() - 50);
        playerKilled(player);
        cout << "You have " << player.getHealth() << " HP\n";
        roomThirteen(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else 
    {
        cout << "There is no door there. Please use your brain.\n";
        roomTwelve(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
}

// Room 13
void roomThirteen(Player &player, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen) 
{
    BaseEnemy ghostThirteen;
    ghostThirteen.deadOrAlive(true);
    char moveRoomThirteen;
    ghostThirteenFight(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    cout << "Welcome to room 13\n";
    cout << "Walk up to room 14 (W), walk left to room 15 (A), or walk right to room 12 (D):  ";
    cin >> moveRoomThirteen;
    moveRoomThirteen = toupper(moveRoomThirteen);
    if (moveRoomThirteen == 'W') 
    {
        roomFourteen(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else if (moveRoomThirteen == 'A') 
    {
        roomFifteen(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else if (moveRoomThirteen == 'D') 
    {
        roomTwelve(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else 
    {
        cout << "There is no door there. Please use your brain.\n";
        roomThirteen(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
}

// Room 14
void roomFourteen(Player &player, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen) 
{
    char moveRoomFourteen;
    cout << "Welcome to room 14\n";
    cout << "Walk up to room 10 (W), walk down to room 13 (S), walk left to room 15 (A), or walk right to room 12 (D):  ";
    cin >> moveRoomFourteen;
    moveRoomFourteen = toupper(moveRoomFourteen);
    if (moveRoomFourteen == 'W') 
    {
        roomTen(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else if (moveRoomFourteen == 'A') 
    {
        roomFifteen(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else if (moveRoomFourteen == 'S') 
    {
        roomThirteen(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else if (moveRoomFourteen == 'D') 
    {
        roomTwelve(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else 
    {
        cout << "There is no door there. Please use your brain.\n";
        roomFourteen(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
}

// Room 15
void roomFifteen(Player &player, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen) 
{
    char healFifteen, moveRoomFifteen;
    cout << "Welcome to room 15\n";
    cout << "You see a campfire in the middle of the room.\n";
    cout << "Your health " << player.getHealth() << " HP\n";
    cout << "The campfire's warmpth is comforting to you. Would you like to heal. (Y/N):  ";
    cin >> healFifteen;
    healFifteen = toupper(healFifteen);
    if (healFifteen == 'Y') 
    {
        player.setHealth(100);
        cout << "You healed to " << player.getHealth() << " HP\n";
    }
    else if (healFifteen == 'N') 
    {
        cout << "You chose not to heal. Kinda not a big brain play.\n";
    }
    else 
    {
        cout << "That is not one of the options. Please choose one of the options.\n";
        roomFifteen(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    cout << "Walk up to room 11 (W), walk down to room 14 (S), walk left to room 16 (A), or walk right to room 13 (D):  ";
    cin >> moveRoomFifteen;
    moveRoomFifteen = toupper(moveRoomFifteen);
    if (moveRoomFifteen == 'W') 
    {
        roomEleven(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else if (moveRoomFifteen == 'S') 
    {
        roomFourteen(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else if (moveRoomFifteen == 'A') 
    {
        if (player.keyCheck() == true) 
        {
            roomBoss(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
        }
        else if (player.keyCheck() == false) 
        {
            cout << "You dont have the key to get into this room\n";
            roomFifteen(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
        }
    }
    else if (moveRoomFifteen == 'D') 
    {
        roomThirteen(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else 
    {
        cout << "There is no door there. Please use your brain.\n";
        roomFifteen(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
}

// Room 16 with Final Boss
void roomBoss(Player &player, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen) 
{
    Boss cthulhu;
    cthulhu.deadOrAlive(true);
    cout << "Congratulations you have made it to the final boss, Cthulu\n";
    cthulhuFight(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
}

// Main Menu
void start() 
{
    Player player;
    char playGame;
    string playerName;
    cout << "Would you like to play Ancient Abyss (Y/N):  ";
    cin >> playGame;
    playGame = toupper(playGame);
    if (playGame == 'Y') 
    {
        cout << "What would you like your name to be?\n";
        cin >> playerName;
        cout << "Welcome " << playerName << " it is nice of you to play the game\n";
        cout << playerName << " awakens in a room with a campfire, unsure of what to do " << playerName << " checks the walls for any hidden things.\n";
        cout << "As " << playerName << " checks the walls they find a list of things to do. To escape make it to the end and defeat Cuthulu, find the Dragon somewhere in the rooms and ";
        cout << "kill it. But don't die while your at it or you lose.\n";
        player.setHealth(100);
        player.setDamage(20);
        player.getKey(false);
        player.playerAlive(true);
        startingRoom(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else if (playGame == 'N') 
    {
        cout << "We will be waiting for you to come back and play.\n";
        start();
    }
    else 
    {
        cout << "that is not an option. Please select one of the options\n";
        start();
    }
}

// Ghost fight in room 5
void ghostFiveFight(Player &player, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen) 
{
    char playerAttack;
    if (ghostFive.killedEnemy() == false) 
    {
        while (player.getHealth() > 0 && ghostFive.health > 0) 
        {
            cout << "You see a ghost blocking your way. What do you do. Fight (F), Check (C), Run (R)\n";
            cin >> playerAttack;
            playerAttack = toupper(playerAttack);
            if (playerAttack == 'F') 
            {
                cout << "you managed to get a hit on the enemy\n";
                ghostFive.health - 20;
                cout << "You killed the ghost\n";
                ghostFive.deadOrAlive(false);
                ghostFive.enemyDead(true);
                break;
            }
            else if (playerAttack == 'C') 
            {
                cout << "\n Greg\nCreature: Ghost\nHealth:" << ghostFive.health << "\nDefence: 0\nAttack: "<< ghostFive.damage <<"\nSpeed: 3\n";
                cout << "The ghost attacked you for 5 damage\n";
                player.setHealth(player.getHealth() - 5);
                playerKilled(player);
                ghostFiveFight(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
            }
            else if (playerAttack == 'R') 
            {
                cout << "You tried to escape but the ghost blocked the way\n";
                cout << "The ghost attacked you for 5 damage\n";
                player.setHealth(player.getHealth() - 5);
                playerKilled(player);
                ghostFiveFight(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
            }
            else 
            {
                cout << "That is not an opton please select one of the options\n";
                ghostFiveFight(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
            }
        }
    }
    else if (ghostFive.killedEnemy() == true) 
    {
        cout << "You have aleady killed the ghost.\n";
    }
}

// Ghost fight in room 11
void ghostElevenFight(Player &player, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen) 
{
    char playerAttack;
    if (ghostEleven.killedEnemy() == false) 
    {
        while (player.getHealth() > 0 && ghostEleven.health > 0) 
        {
            cout << "You see a ghost blocking your way. What do you do. Fight (F), Check (C), Run (R)\n";
            cin >> playerAttack;
            playerAttack = toupper(playerAttack);
            if (playerAttack == 'F') 
            {
                cout << "you managed to get a hit on the enemy\n";
                ghostEleven.health - 20;
                cout << "You killed the ghost\n";
                ghostEleven.deadOrAlive(false);
                ghostEleven.enemyDead(true);
                break;
            }
            else if (playerAttack == 'C') 
            {
                cout << "\n Greg\nCreature: Ghost\nHealth:" << ghostEleven.health << "\nDefence: 0\nAttack: "<< ghostEleven.damage <<"\nSpeed: 3\n";
                cout << "The ghost attacked you for 5 damage\n";
                player.setHealth(player.getHealth() - 5);
                playerKilled(player);
                ghostElevenFight(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
            }
            else if (playerAttack == 'R') 
            {
                cout << "You tried to escape but the ghost blocked the way\n";
                cout << "The ghost attacked you for 5 damage\n";
                player.setHealth(player.getHealth() - 5);
                playerKilled(player);
                ghostElevenFight(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
            }
            else 
            {
                cout << "That is not an opton please select one of the options\n";
                ghostElevenFight(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
            }
        }
    }
    else if (ghostEleven.killedEnemy() == true) 
    {
        cout << "You have aleady killed the ghost.\n";
    }
}

// Ghost fight in room 13
void ghostThirteenFight(Player &player, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen) 
{
    char playerAttack;
    if (ghostThirteen.killedEnemy() == false) 
    {
        while (player.getHealth() > 0 && ghostThirteen.health > 0) 
        {
            cout << "You see a ghost blocking your way. What do you do. Fight (F), Check (C), Run (R)\n";
            cin >> playerAttack;
            playerAttack = toupper(playerAttack);
            if (playerAttack == 'F') 
            {
                cout << "you managed to get a hit on the enemy\n";
                ghostThirteen.health - 20;
                cout << "You killed the ghost\n";
                ghostThirteen.deadOrAlive(false);
                ghostThirteen.enemyDead(true);
                break;
            }
            else if (playerAttack == 'C') 
            {
                cout << "\n Greg\nCreature: Ghost\nHealth:" << ghostThirteen.health << "\nDefence: 0\nAttack: "<< ghostThirteen.damage <<"\nSpeed: 3\n";
                cout << "The ghost attacked you for 5 damage\n";
                player.setHealth(player.getHealth() - 5);
                playerKilled(player);
                ghostThirteenFight(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
            }
            else if (playerAttack == 'R')
            {
                cout << "You tried to escape but the ghost blocked the way\n";
                cout << "The ghost attacked you for 5 damage\n";
                player.setHealth(player.getHealth() - 5);
                playerKilled(player);
                ghostThirteenFight(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
            }
            else 
            {
                cout << "That is not an opton please select one of the options\n";
                ghostThirteenFight(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
            }
        }
    }
    else if (ghostThirteen.killedEnemy() == true) 
    {
        cout << "You have aleady killed the ghost.\n";
    }
}

// Final Boss Fight in room 16 (roomBoss)

void cthulhuFight(Player &player, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen)
{
    char playerAttack;
    if (cthulhu.killedCthulhu() == false)
    {
        while (player.getHealth() > 0 && cthulhu.health > 0)
        {
            cout << "Fight (F), Check (C), Run (R)\n";
            cin >> playerAttack;
            playerAttack = toupper(playerAttack);
            if (playerAttack == 'F')
            {
                if (player.getHealth() <= 0)
                {
                    playerKilled(player);
                }
                else if (cthulhu.health > 0)
                {
                    cthulhu.health = cthulhu.health - 20;
                    cout << "You hit Cthulhu\n";
                    cout << "Cthulhu's turn!\n";
                    cout << "Cthulhu attacked you for 25 damage\n";
                    player.setHealth(player.getHealth() - 5);
                    if (cthulhu.health <= 0)
                    {
                        cthulhu.deadOrAlive(false);
                        cthulhu.cthulhuDead(true);
                        cthulhuFight(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
                    }
                }
            }
            else if (playerAttack == 'C')
            {
                cout << "\nCthulu\nCreature: Ancient God\nHealth: " << cthulhu.health << "\nDefence: 35\nAttack: " << cthulhu.damage << "\nSpeed: inmobile\n";
                cout << "Cthulhu attacked you for 25 damage\n";
                player.setHealth(player.getHealth() - 25);
                playerKilled(player);
                cthulhuFight(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
            }
            else if (playerAttack == 'R')
            {
                cout << "You tried to escape but there is way no way out.\n";
                cout << "Cthulhu attacked you for 25 damage\n";
                player.setHealth(player.getHealth() - 25);
                playerKilled(player);
                cthulhuFight(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
            }
            else
            {
                cout << "That is not an opton please select one of the options\n";
                cthulhuFight(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
            }
        }
    }
    else if (cthulhu.killedCthulhu() == true) 
    {
        cout << "You have killed Cthulhu\n";
        cout << "Congratulations your prize is a Pizza Hut Hershey Cookie!!\n";
        exit(0);
    }
}

// Dragon fight in room 4
void dragonFight(Player &player, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen) 
{
    char playerAttack;
    if (dragon.killedDragon() == false) 
    {
        while (player.getHealth() > 0 && dragon.health > 0) 
        {
            cout << "Fight (F), Check (C), Run (R)\n";
            cin >> playerAttack;
            playerAttack = toupper(playerAttack);
            if (playerAttack == 'F') 
            {
                cout << "You managed to hit Sami\n";
                dragon.health -= player.getDamage();
                cout << "Sami's turn!\n";
                cout << "Sami attacked you for 20 damage\n";
                player.setHealth(player.getHealth() - 20);
                if (dragon.health <= 0) 
                {
                    dragon.deadOrAlive(false);
                    dragon.dragonDead(true);
                    cout << "You have killed Sami.\n";
                    break;
                }
            }
            else if (playerAttack == 'C')
            {
                cout << "\nSami\nCreature: Dragon\nHealth: " << dragon.health << "\nDefence: 10\nAttack: " << dragon.damage << "\nSpeed:40\n";
                cout << "Sami attacked you for 5 damage\n";
                player.setHealth(player.getHealth() - 20);
                playerKilled(player);
                dragonFight(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
            }
            else if (playerAttack == 'R')
            {
                cout << "You tried to escape but Sami's tail blocked the way\n";
                cout << "Sami attacked you for 5 damage\n";
                player.setHealth(player.getHealth() - 20);
                playerKilled(player);
                dragonFight(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
            }
            else
            {
                cout << "That is not an opton please select one of the options\n";
                dragonFight(player, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
            }
        }
    }
    else if (dragon.killedDragon() == true)
    {
        cout << "You have aleady killed the Sami the Dragon.\n";
    }
}

// If the player dies
void playerKilled(Player &player) 
{
    if (player.getHealth() <= 0) 
    {
        cout << "YOU'RE DEAD\n";
        exit(0);
    }
}

int main() 
{ 
    start(); 
}