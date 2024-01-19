#include <iostream>
#include <string>
#include "Classes.hpp"
#include "Blackjack.hpp"

using namespace std;

// Allows all the functions to call one another (there is no other way that I know of)
void startingRoom(Hero &hero, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen);
void roomTwo(Hero &hero, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen);
void roomThree(Hero &hero, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen);
void roomMiniBoss(Hero &hero, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen);
void roomFive(Hero &hero, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen);
void roomSix(Hero &hero, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen);
void roomSeven(Hero &hero, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen);
void roomEight(Hero &hero, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen);
void roomNine(Hero &hero, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen);
void roomTen(Hero &hero, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen);
void roomEleven(Hero &hero, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen);
void roomTwelve(Hero &hero, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen);
void roomThirteen(Hero &hero, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen);
void roomFourteen(Hero &hero, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen);
void roomFifteen(Hero &hero, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen);
void roomBoss(Hero &hero, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen);
void cthulhuFight(Hero &hero, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen);
void dragonFight(Hero &hero, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen);
void ghostFiveFight(Hero &hero, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen);
void ghostElevenFight(Hero &hero, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen);
void ghostThirteenFight(Hero &hero, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen);
void heroKilled(Hero &hero);

// First room
void startingRoom(Hero &hero, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen) 
{
    char moveRoomOne;
    cout << "Welcome to room 1\n";
    cout << "Walk down to room 5 (S) or walk left to room 2 (A):  ";
    cin >> moveRoomOne;
    moveRoomOne = toupper(moveRoomOne);
    if (moveRoomOne == 'A') 
    {
        roomTwo(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else if (moveRoomOne == 'S') 
    {
        roomFive(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else 
    {
        cout << "There is no door there. Please use your brain.\n";
        startingRoom(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
}

// Room 2
void roomTwo(Hero &hero, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen) 
{
    char moveRoomTwo;
    cout << "Welcome to room 2\n";
    cout << "Walk down to room 6 (S), walk left to room 3 (A), or walk right to room 1 (D):  ";
    cin >> moveRoomTwo;
    moveRoomTwo = toupper(moveRoomTwo);
    if (moveRoomTwo == 'A') 
    {
        roomThree(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else if (moveRoomTwo == 'D') 
    {
        startingRoom(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else if (moveRoomTwo == 'S') 
    {
        roomSix(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else 
    {
        cout << "There is no door there. please use your brain\n";
        roomTwo(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
}

// Room 3
void roomThree(Hero &hero, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen) 
{
    char moveRoomThree;
    cout << "Welcome to room 3\n";
    cout << "Walk down to room 7 (S), walk left to room 4 (A), or walk right to room 2 (D):  ";
    cin >> moveRoomThree;
    moveRoomThree = toupper(moveRoomThree);
    if (moveRoomThree == 'A') 
    {
        roomMiniBoss(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else if (moveRoomThree == 'D') 
    {
        roomTwo(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else if (moveRoomThree == 'S') 
    {
        roomSeven(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else 
    {
        cout << "There is no door there. Please use your brain.\n";
        roomThree(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
}

// Room 4 with mini boss
void roomMiniBoss(Hero &hero, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen)
{
    char moveRoomFour;
    cout << "Welcome to room 4\n";
    cout << "As you enter the room you see a large dragon resting on the ground, you deside to name it Sami.\n";
    dragonFight(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    cout << "Walk down to room 8 (S) or walk right to room 3 (D):  ";
    cin >> moveRoomFour;
    moveRoomFour = toupper(moveRoomFour);
    if (moveRoomFour == 'S') 
    {
        roomEight(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else if (moveRoomFour == 'D') 
    {
        roomThree(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else 
    {
        cout << "There is no door there. Please use your brain.\n";
        roomMiniBoss(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
}

// Room 5
void roomFive(Hero &hero, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen) 
{
    char key, moveRoomFive;
    ghostFiveFight(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    if (hero.keyCheck() == false) 
    {
        cout << "Welcome to room 5\n";
        cout << "There is a key on the ground pick it up (P) or leave it (L):  ";
        cin >> key;
        key = toupper(key);
        if (key == 'P') 
        {
            cout << "you picked up the key\n";
            hero.getKey(true);
        }
        else if (key == 'L') 
        {
            cout << "You chose to leave the key. That wasnt a good choice but ok.\n";
        }
        else 
        {
            cout << "That is an invalid imput\n";
            roomFive(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
        }
    }
    else if (hero.keyCheck() == true) 
    {
        cout << "You have already grabbed the key\n";
    }
    cout << "Walk up to room 1 (W), walk down to room 9 (S), or walk left to room 6 (A):  ";
    cin >> moveRoomFive;
    moveRoomFive = toupper(moveRoomFive);
    if (moveRoomFive == 'A') 
    {
        roomSix(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else if (moveRoomFive == 'W') 
    {
        startingRoom(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else if (moveRoomFive == 'S') 
    {
        roomNine(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else 
    {
        cout << "There is no door there. Please use your brain.\n";
        roomFive(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
}

// Room 6
void roomSix(Hero &hero, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen) 
{
    char moveRoomSix;
    cout << "Welcome to room 6\n";
    cout << "Walk up to room 2 (W), walk down to room 10 (S), walk left to room 7 (A), or walk right to room 5 (D):  ";
    cin >> moveRoomSix;
    moveRoomSix = toupper(moveRoomSix);
    if (moveRoomSix == 'A') 
    {
        roomSeven(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else if (moveRoomSix == 'W') 
    {
        roomTwo(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else if (moveRoomSix == 'S') 
    {
        roomTen(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else if (moveRoomSix == 'D') 
    {
        roomFive(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else 
    {
        cout << "There is no door there. Please use your brain.\n";
        roomSix(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
}

// Room 7
void roomSeven(Hero &hero, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen) 
{
    char moveRoomSeven;
    cout << "Welcome to room 7\n";
    cout << "Walk up to room 3 (W), walk down to room 11 (S), walk left to room 8 (A), or walk right to room 6 (D):  ";
    cin >> moveRoomSeven;
    moveRoomSeven = toupper(moveRoomSeven);
    if (moveRoomSeven == 'W') 
    {
        roomThree(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else if (moveRoomSeven == 'A') 
    {
        roomEight(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else if (moveRoomSeven == 'S') 
    {
        roomEleven(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else if (moveRoomSeven == 'D') 
    {
        roomSix(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else {
        cout << "There is no door there. Please use your brain.\n";
        roomSeven(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
}

// Room 8
void roomEight(Hero &hero, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen) 
{
    char healEight, moveRoomEight;
    cout << "Welcome to room 8\n";
    cout << "You see a campfire in the middle of the room.\n";
    cout << "Your health " << hero.getHealth() << " HP\n";
    cout << "The campfire's warmpth is comforting to you. Would you like to heal. (Y/N):  ";
    cin >> healEight;
    healEight = toupper(healEight);
    if (healEight == 'Y') 
    {
        hero.setHealth(100);
        cout << "You healed to " << hero.getHealth() << " HP\n";
    }
    else if (healEight == 'N') 
    {
        cout << "You chose not to heal. Kinda not a big brain play.\n";
    }
    else 
    {
        cout << "That is not one of the options. Please choose one of the options.\n";
        roomEight(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    cout << "Walk up to room 4 (W), walk down to room 16 (S), or walk right to room 7 (D):  ";
    cin >> moveRoomEight;
    moveRoomEight = toupper(moveRoomEight);
    if (moveRoomEight == 'D') 
    {
        roomSeven(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else if (moveRoomEight == 'W') 
    {
        roomMiniBoss(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else if (moveRoomEight == 'S') 
    {
        if (hero.keyCheck() == true) 
        {
            roomBoss(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
        }
        else if (hero.keyCheck() == false) 
        {
            cout << "You dont have the key to get into this room.\n";
            roomEight(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
        }
    }
    else 
    {
        cout << "There is no door there. Please use your brain.\n";
        roomEight(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
}

// Room 9
void roomNine(Hero &hero, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen)
{
    char moveRoomNine;
    cout << "Welcome to room 9\n";
    cout << "Walk up to room 5 (W), walk down to room 12 (S), or walk left to room 10 (A):  ";
    cin >> moveRoomNine;
    moveRoomNine = toupper(moveRoomNine);
    if (moveRoomNine == 'A') 
    {
        roomTen(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else if (moveRoomNine == 'W') 
    {
        roomFive(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else if (moveRoomNine == 'S') 
    {
        roomTwelve(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else 
    {
        cout << "There is no door there. Please use your brain.\n";
        roomNine(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
}

// Room 10 THERE IS A TRAP IN THIS ROOM IF YOU TRY TO ENTER ROOM 11
void roomTen(Hero &hero, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen) 
{
    char healTen, moveRoomTen;
    cout << "Welcome to room 10\n";
    cout << "You see a campfire in the middle of the room.\n";
    cout << "Your health " << hero.getHealth() << " HP\n";
    cout << "The campfire's warmpth is comforting to you. Would you like to heal. (Y/N):  ";
    cin >> healTen;
    healTen = toupper(healTen);
    if (healTen == 'Y') 
    {
        hero.setHealth(100);
        cout << "You healed to " << hero.getHealth() << " HP\n";
    }
    else if (healTen == 'N') 
    {
        cout << "You chose not to heal. Kinda not a big brain play.\n";
    }
    else
    {
        cout << "That is not one of the options. Please choose one of the options.\n";
        roomTen(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    cout << "Walk up to room 6 (W), walk down to room 14 (S), walk left to room 11 (A), or walk back to room 9 (D):  ";
    cin >> moveRoomTen;
    moveRoomTen = toupper(moveRoomTen);
    if (moveRoomTen == 'W') 
    {
        roomSix(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else if (moveRoomTen == 'A') 
    {
        cout << "As you walk through the hall way you see spikes poking out of the wall\n";
        cout << "As you walk past them they activate and you get hit\n";
        cout << "The spikes deal 50 damage\n";
        hero.setHealth(hero.getHealth() - 50);
        heroKilled(hero);
        cout << "You have " << hero.getHealth() << "HP.\n\n";
        roomEleven(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else if (moveRoomTen == 'S') 
    {
        roomFourteen(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else if (moveRoomTen == 'D') 
    {
        roomNine(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else 
    {
        cout << "There is no door there. Please use your brain.\n";
        roomTen(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
}

// Room 11
void roomEleven(Hero &hero, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen) 
{
    char moveRoomEleven;
    cout << "Welcome to room 11\n";
    ghostElevenFight(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    cout << "Walk up to room 7 (W), walk down to room 15 (S), walk left to room 16 (A), or walk right to room 10 (D):  ";
    cin >> moveRoomEleven;
    moveRoomEleven = toupper(moveRoomEleven);
    if (moveRoomEleven == 'W') 
    {
        roomSeven(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else if (moveRoomEleven == 'A') 
    {
        if (hero.keyCheck() == true) 
        {
            roomBoss(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
        }
        else if (hero.keyCheck() == false) 
        {
            cout << "You dont have the key to get into this room\n";
            roomEleven(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
        }
    }
    else if (moveRoomEleven == 'S') 
    {
        roomFifteen(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else if (moveRoomEleven == 'D') 
    {
        roomTen(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else 
    {
        cout << "There is no door there. Please use your brain.\n";
        roomEleven(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
}

// Room 12 THIS ROOM HAS A TRAP IF YOU TRY TO GO TO ROOM 13
void roomTwelve(Hero &hero, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen) 
{
    char moveRoomTwelve;
    cout << "Welcome to room 12\n";
    cout << "Walk up to room 9 (W), walk down to room 13 (S), or walk left to room 14 (A):  ";
    cin >> moveRoomTwelve;
    moveRoomTwelve = toupper(moveRoomTwelve);
    if (moveRoomTwelve == 'W') 
    {
        roomNine(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else if (moveRoomTwelve == 'A') 
    {
        roomFourteen(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else if (moveRoomTwelve == 'S') 
    {
        cout << "As you walk through the hall way you see spikes poking out of the wall\n";
        cout << "As you walk past them they activate and you get hit.\n";
        cout << "The spikes deal 50 damage\n";
        hero.setHealth(hero.getHealth() - 50);
        heroKilled(hero);
        cout << "You have " << hero.getHealth() << " HP\n";
        roomThirteen(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else 
    {
        cout << "There is no door there. Please use your brain.\n";
        roomTwelve(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
}

// Room 13
void roomThirteen(Hero &hero, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen) 
{
    char moveRoomThirteen;
    ghostThirteenFight(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    cout << "Welcome to room 13\n";
    cout << "Walk up to room 14 (W), walk left to room 15 (A), or walk right to room 12 (D):  ";
    cin >> moveRoomThirteen;
    moveRoomThirteen = toupper(moveRoomThirteen);
    if (moveRoomThirteen == 'W') 
    {
        roomFourteen(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else if (moveRoomThirteen == 'A') 
    {
        roomFifteen(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else if (moveRoomThirteen == 'D') 
    {
        roomTwelve(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else 
    {
        cout << "There is no door there. Please use your brain.\n";
        roomThirteen(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
}

// Room 14
void roomFourteen(Hero &hero, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen) 
{
    char moveRoomFourteen;
    cout << "Welcome to room 14\n";
    cout << "Walk up to room 10 (W), walk down to room 13 (S), walk left to room 15 (A), or walk right to room 12 (D):  ";
    cin >> moveRoomFourteen;
    moveRoomFourteen = toupper(moveRoomFourteen);
    if (moveRoomFourteen == 'W') 
    {
        roomTen(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else if (moveRoomFourteen == 'A') 
    {
        roomFifteen(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else if (moveRoomFourteen == 'S') 
    {
        roomThirteen(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else if (moveRoomFourteen == 'D') 
    {
        roomTwelve(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else 
    {
        cout << "There is no door there. Please use your brain.\n";
        roomFourteen(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
}

// Room 15
void roomFifteen(Hero &hero, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen) 
{
    char healFifteen, moveRoomFifteen;
    cout << "Welcome to room 15\n";
    cout << "You see a campfire in the middle of the room.\n";
    cout << "Your health " << hero.getHealth() << " HP\n";
    cout << "The campfire's warmpth is comforting to you. Would you like to heal. (Y/N):  ";
    cin >> healFifteen;
    healFifteen = toupper(healFifteen);
    if (healFifteen == 'Y') 
    {
        hero.setHealth(100);
        cout << "You healed to " << hero.getHealth() << " HP\n";
    }
    else if (healFifteen == 'N') 
    {
        cout << "You chose not to heal. Kinda not a big brain play.\n";
    }
    else 
    {
        cout << "That is not one of the options. Please choose one of the options.\n";
        roomFifteen(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    cout << "Walk up to room 11 (W), walk down to room 14 (S), walk left to room 16 (A), or walk right to room 13 (D):  ";
    cin >> moveRoomFifteen;
    moveRoomFifteen = toupper(moveRoomFifteen);
    if (moveRoomFifteen == 'W') 
    {
        roomEleven(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else if (moveRoomFifteen == 'S') 
    {
        roomFourteen(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else if (moveRoomFifteen == 'A') 
    {
        if (hero.keyCheck() == true) 
        {
            roomBoss(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
        }
        else if (hero.keyCheck() == false) 
        {
            cout << "You dont have the key to get into this room\n";
            roomFifteen(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
        }
    }
    else if (moveRoomFifteen == 'D') 
    {
        roomThirteen(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else 
    {
        cout << "There is no door there. Please use your brain.\n";
        roomFifteen(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
}

// Room 16 with Final Boss
void roomBoss(Hero &hero, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen) 
{
    cout << "Congratulations you have made it to the final boss, Cthulu\n";
    cthulhuFight(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
}

// Main Menu
void start() 
{
    Hero hero;
    Boss cthulhu;
    MiniBoss dragon;
    BaseEnemy ghostFive;
    BaseEnemy ghostEleven;
    BaseEnemy ghostThirteen;
    char playGame;
    string heroName;
    cout << "Would you like to play Ancient Abyss (Y/N):  ";
    cin >> playGame;
    playGame = toupper(playGame);
    if (playGame == 'Y') 
    {
        cout << "What would you like your name to be?\n";
        cin >> heroName;
        cout << "Welcome " << heroName << " it is nice of you to play the game\n";
        cout << heroName << " awakens in a room with a campfire, unsure of what to do " << heroName << " checks the walls for any hidden things.\n";
        cout << "As " << heroName << " checks the walls they find a list of things to do. To escape make it to the end and defeat Cuthulu, find the Dragon somewhere in the rooms and ";
        cout << "kill it. But don't die while your at it or you lose.\n";
        startingRoom(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
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
void ghostFiveFight(Hero &hero, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen) 
{
    char heroAttack;
    if (ghostFive.killedEnemy() == false) 
    {
        while (hero.getHealth() > 0 && ghostFive.health > 0) 
        {
            cout << "You see a ghost blocking your way. What do you do. Fight (F), Check (C), Run (R)\n";
            cin >> heroAttack;
            heroAttack = toupper(heroAttack);
            if (heroAttack == 'F') 
            {
                cout << "you managed to get a hit on the enemy\n";
                ghostFive.health -=  - hero.getDamage();
                cout << "You killed the ghost\n";
                ghostFive.enemyDead(true);
                break;
            }
            else if (heroAttack == 'C') 
            {
                cout << "\n Greg\nCreature: Ghost\nHealth:" << ghostFive.health << "\nDefence: 0\nAttack: "<< ghostFive.damage <<"\nSpeed: 3\n";
                cout << "The ghost attacked you for 5 damage\n";
                hero.setHealth(hero.getHealth() - 5);
                heroKilled(hero);
                ghostFiveFight(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
            }
            else if (heroAttack == 'R') 
            {
                cout << "You tried to escape but the ghost blocked the way\n";
                cout << "The ghost attacked you for 5 damage\n";
                hero.setHealth(hero.getHealth() - 5);
                heroKilled(hero);
                ghostFiveFight(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
            }
            else 
            {
                cout << "That is not an opton please select one of the options\n";
                ghostFiveFight(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
            }
        }
    }
    else if (ghostFive.killedEnemy() == true) 
    {
        cout << "You have aleady killed the ghost.\n";
    }
}

// Ghost fight in room 11
void ghostElevenFight(Hero &hero, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen) 
{
    char heroAttack;
    if (ghostEleven.killedEnemy() == false) 
    {
        while (hero.getHealth() > 0 && ghostEleven.health > 0) 
        {
            cout << "You see a ghost blocking your way. What do you do. Fight (F), Check (C), Run (R)\n";
            cin >> heroAttack;
            heroAttack = toupper(heroAttack);
            if (heroAttack == 'F') 
            {
                cout << "you managed to get a hit on the enemy\n";
                ghostEleven.health -=  - hero.getDamage();
                cout << "You killed the ghost\n";
                ghostEleven.enemyDead(true);
                break;
            }
            else if (heroAttack == 'C') 
            {
                cout << "\n Greg\nCreature: Ghost\nHealth:" << ghostEleven.health << "\nDefence: 0\nAttack: "<< ghostEleven.damage <<"\nSpeed: 3\n";
                cout << "The ghost attacked you for 5 damage\n";
                hero.setHealth(hero.getHealth() - 5);
                heroKilled(hero);
                ghostElevenFight(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
            }
            else if (heroAttack == 'R') 
            {
                cout << "You tried to escape but the ghost blocked the way\n";
                cout << "The ghost attacked you for 5 damage\n";
                hero.setHealth(hero.getHealth() - 5);
                heroKilled(hero);
                ghostElevenFight(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
            }
            else 
            {
                cout << "That is not an opton please select one of the options\n";
                ghostElevenFight(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
            }
        }
    }
    else if (ghostEleven.killedEnemy() == true) 
    {
        cout << "You have aleady killed the ghost.\n";
    }
}

// Ghost fight in room 13
void ghostThirteenFight(Hero &hero, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen) 
{
    char heroAttack;
    if (ghostThirteen.killedEnemy() == false) 
    {
        while (hero.getHealth() > 0 && ghostThirteen.health > 0) 
        {
            cout << "You see a ghost blocking your way. What do you do. Fight (F), Check (C), Run (R)\n";
            cin >> heroAttack;
            heroAttack = toupper(heroAttack);
            if (heroAttack == 'F') 
            {
                cout << "you managed to get a hit on the enemy\n";
                ghostThirteen.health -=  - hero.getDamage();
                cout << "You killed the ghost\n";
                ghostThirteen.enemyDead(true);
                break;
            }
            else if (heroAttack == 'C') 
            {
                cout << "\n Greg\nCreature: Ghost\nHealth:" << ghostThirteen.health << "\nDefence: 0\nAttack: "<< ghostThirteen.damage <<"\nSpeed: 3\n";
                cout << "The ghost attacked you for 5 damage\n";
                hero.setHealth(hero.getHealth() - 5);
                heroKilled(hero);
                ghostThirteenFight(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
            }
            else if (heroAttack == 'R')
            {
                cout << "You tried to escape but the ghost blocked the way\n";
                cout << "The ghost attacked you for 5 damage\n";
                hero.setHealth(hero.getHealth() - 5);
                heroKilled(hero);
                ghostThirteenFight(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
            }
            else 
            {
                cout << "That is not an opton please select one of the options\n";
                ghostThirteenFight(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
            }
        }
    }
    else if (ghostThirteen.killedEnemy() == true) 
    {
        cout << "You have aleady killed the ghost.\n";
    }
}

// Final Boss Fight in room 16 (roomBoss)

void cthulhuFight(Hero &hero, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen)
{
    char heroAttack;
    if (cthulhu.killedCthulhu() == false)
    {
        while (hero.getHealth() > 0 && cthulhu.health > 0)
        {
            cout << "Fight (F), Check (C), Run (R)\n";
            cin >> heroAttack;
            heroAttack = toupper(heroAttack);
            if (heroAttack == 'F')
            {
                if (hero.getHealth() <= 0)
                {
                    heroKilled(hero);
                }
                else if (cthulhu.health > 0)
                {
                    cthulhu.health = cthulhu.health - hero.getDamage();
                    cout << "You hit Cthulhu\n";
                    cout << "Cthulhu's turn!\n";
                    cout << "Cthulhu attacked you for 25 damage\n";
                    hero.setHealth(hero.getHealth() - 5);
                    if (cthulhu.health <= 0)
                    {
                        cthulhu.cthulhuDead(true);
                        cthulhuFight(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
                    }
                }
            }
            else if (heroAttack == 'C')
            {
                cout << "\nCthulu\nCreature: Ancient God\nHealth: " << cthulhu.health << "\nDefence: 35\nAttack: " << cthulhu.damage << "\nSpeed: inmobile\n";
                cout << "Cthulhu attacked you for 25 damage\n";
                hero.setHealth(hero.getHealth() - 25);
                heroKilled(hero);
                cthulhuFight(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
            }
            else if (heroAttack == 'R')
            {
                cout << "You tried to escape but there is way no way out.\n";
                cout << "Cthulhu attacked you for 25 damage\n";
                hero.setHealth(hero.getHealth() - 25);
                heroKilled(hero);
                cthulhuFight(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
            }
            else
            {
                cout << "That is not an opton please select one of the options\n";
                cthulhuFight(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
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
void dragonFight(Hero &hero, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen) 
{
    char heroAttack;
    if (dragon.killedDragon() == false) 
    {
        while (hero.getHealth() > 0 && dragon.health > 0) 
        {
            cout << "Fight (F), Check (C), Run (R)\n";
            cin >> heroAttack;
            heroAttack = toupper(heroAttack);
            if (heroAttack == 'F') 
            {
                blackjack(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
                cout << "You managed to hit Sami\n";
                dragon.health -= hero.getDamage();
                cout << "Sami's turn!\n";
                cout << "Sami attacked you for 20 damage\n";
                hero.setHealth(hero.getHealth() - 20);
                if (dragon.health <= 0) 
                {
                    dragon.dragonDead(true);
                    cout << "You have killed Sami.\n";
                    cout << "You feel more confident after killing the dragon\n";
                    cout << "Your new attack strength is 30\n";
                    hero.setDamage(30);
                    break;
                }
            }
            else if (heroAttack == 'C')
            {
                cout << "\nSami\nCreature: Dragon\nHealth: " << dragon.health << "\nDefence: 10\nAttack: " << dragon.damage << "\nSpeed:40\n";
                cout << "Sami attacked you for 5 damage\n";
                hero.setHealth(hero.getHealth() - 20);
                heroKilled(hero);
                dragonFight(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
            }
            else if (heroAttack == 'R')
            {
                cout << "You tried to escape but Sami's tail blocked the way\n";
                cout << "Sami attacked you for 5 damage\n";
                hero.setHealth(hero.getHealth() - 20);
                heroKilled(hero);
                dragonFight(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
            }
            else
            {
                cout << "That is not an opton please select one of the options\n";
                dragonFight(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
            }
        }
    }
    else if (dragon.killedDragon() == true)
    {
        cout << "You have aleady killed the Sami the Dragon.\n";
    }
}

// If the hero dies
void heroKilled(Hero &hero) 
{
    if (hero.getHealth() <= 0) 
    {
        cout << "YOU'RE DEAD\n";
        exit(0);
    }
}

int main() 
{ 
    start(); 
}