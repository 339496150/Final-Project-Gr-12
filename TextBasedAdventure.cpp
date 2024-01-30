//Thank you for being an amazing teacher for the 3 years we have had you teaching us

#include <iostream>
#include <string>
#include "Classes.hpp"

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


// First room
void startingRoom(Hero &hero, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen) 
{
    char moveRoomOne;
    cout << "Welcome to room 1" << endl;
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
        cout << "There is no door there. Please use your brain." << endl;
        startingRoom(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
}

// Room 2
void roomTwo(Hero &hero, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen) 
{
    char moveRoomTwo;
    cout << "Welcome to room 2" << endl;
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
        cout << "There is no door there. please use your brain" << endl;
        roomTwo(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
}

// Room 3
void roomThree(Hero &hero, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen) 
{
    char moveRoomThree;
    cout << "Welcome to room 3" << endl;
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
        cout << "There is no door there. Please use your brain." << endl;
        roomThree(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
}

// Room 4 with mini boss
void roomMiniBoss(Hero &hero, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen)
{
    char moveRoomFour;
    cout << "Welcome to room 4" << endl;
    cout << "As you enter the room you see a large dragon resting on the ground, you deside to name it Sami." << endl;
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
        cout << "There is no door there. Please use your brain." << endl;
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
        cout << "Welcome to room 5" << endl;
        cout << "There is a key on the ground pick it up (P) or leave it (L):  ";
        cin >> key;
        key = toupper(key);
        if (key == 'P') 
        {
            cout << "you picked up the key" << endl;
            hero.getKey(true);
        }
        else if (key == 'L') 
        {
            cout << "You chose to leave the key. That wasnt a good choice but ok." << endl;
        }
        else 
        {
            cout << "That is an invalid imput" << endl;
            roomFive(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
        }
    }
    else if (hero.keyCheck() == true) 
    {
        cout << "You have already grabbed the key" << endl;
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
        cout << "There is no door there. Please use your brain." << endl;
        roomFive(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
}

// Room 6
void roomSix(Hero &hero, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen) 
{
    char moveRoomSix;
    cout << "Welcome to room 6" << endl;
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
        cout << "There is no door there. Please use your brain." << endl;
        roomSix(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
}

// Room 7
void roomSeven(Hero &hero, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen) 
{
    char moveRoomSeven;
    cout << "Welcome to room 7" << endl;
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
        cout << "There is no door there. Please use your brain." << endl;
        roomSeven(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
}

// Room 8
void roomEight(Hero &hero, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen) 
{
    char healEight, moveRoomEight;
    cout << "Welcome to room 8" << endl;
    cout << "You see a campfire in the middle of the room." << endl;
    cout << "Your health " << hero.getHealth() << " HP" << endl;
    cout << "The campfire's warmpth is comforting to you. Would you like to heal. (Y/N):  ";
    cin >> healEight;
    healEight = toupper(healEight);
    if (healEight == 'Y') 
    {
        hero.setHealth(100);
        cout << "You healed to " << hero.getHealth() << " HP" << endl;
    }
    else if (healEight == 'N') 
    {
        cout << "You chose not to heal. Kinda not a big brain play." << endl;
    }
    else 
    {
        cout << "That is not one of the options. Please choose one of the options." << endl;
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
            cout << "You dont have the key to get into this room." << endl;
            roomEight(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
        }
    }
    else 
    {
        cout << "There is no door there. Please use your brain." << endl;
        roomEight(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
}

// Room 9
void roomNine(Hero &hero, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen)
{
    char moveRoomNine;
    cout << "Welcome to room 9" << endl;
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
        cout << "There is no door there. Please use your brain." << endl;
        roomNine(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
}

// Room 10 THERE IS A TRAP IN THIS ROOM IF YOU TRY TO ENTER ROOM 11
void roomTen(Hero &hero, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen) 
{
    char healTen, moveRoomTen;
    cout << "Welcome to room 10" << endl;
    cout << "You see a campfire in the middle of the room." << endl;
    cout << "Your health " << hero.getHealth() << " HP" << endl;
    cout << "The campfire's warmpth is comforting to you. Would you like to heal. (Y/N):  ";
    cin >> healTen;
    healTen = toupper(healTen);
    if (healTen == 'Y') 
    {
        hero.setHealth(100);
        cout << "You healed to " << hero.getHealth() << " HP" << endl;
    }
    else if (healTen == 'N') 
    {
        cout << "You chose not to heal. Kinda not a big brain play." << endl;
    }
    else
    {
        cout << "That is not one of the options. Please choose one of the options." << endl;
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
        cout << "As you walk through the hall way you see spikes poking out of the wall" << endl;
        cout << "As you walk past them they activate and you get hit" << endl;
        cout << "The spikes deal 50 damage" << endl;
        hero.setHealth(hero.getHealth() - 50);
        hero.heroKilled();
        cout << "You have " << hero.getHealth() << "HP.\n" << endl;
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
        cout << "There is no door there. Please use your brain." << endl;
        roomTen(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
}

// Room 11
void roomEleven(Hero &hero, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen) 
{
    char moveRoomEleven;
    cout << "Welcome to room 11" << endl;
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
            cout << "You dont have the key to get into this room" << endl;
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
        cout << "There is no door there. Please use your brain." << endl;
        roomEleven(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
}

// Room 12 THIS ROOM HAS A TRAP IF YOU TRY TO GO TO ROOM 13
void roomTwelve(Hero &hero, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen) 
{
    char moveRoomTwelve;
    cout << "Welcome to room 12" << endl;
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
        cout << "As you walk through the hall way you see spikes poking out of the wall" << endl;
        cout << "As you walk past them they activate and you get hit." << endl;
        cout << "The spikes deal 50 damage" << endl;
        hero.setHealth(hero.getHealth() - 50);
        hero.heroKilled();
        cout << "You have " << hero.getHealth() << " HP" << endl;
        roomThirteen(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else 
    {
        cout << "There is no door there. Please use your brain." << endl;
        roomTwelve(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
}

// Room 13
void roomThirteen(Hero &hero, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen) 
{
    char moveRoomThirteen;
    ghostThirteenFight(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    cout << "Welcome to room 13" << endl;
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
        cout << "There is no door there. Please use your brain." << endl;
        roomThirteen(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
}

// Room 14
void roomFourteen(Hero &hero, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen) 
{
    char moveRoomFourteen;
    cout << "Welcome to room 14" << endl;
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
        cout << "There is no door there. Please use your brain." << endl;
        roomFourteen(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
}

// Room 15
void roomFifteen(Hero &hero, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen) 
{
    char healFifteen, moveRoomFifteen;
    cout << "Welcome to room 15" << endl;
    cout << "You see a campfire in the middle of the room." << endl;
    cout << "Your health " << hero.getHealth() << " HP" << endl;
    cout << "The campfire's warmpth is comforting to you. Would you like to heal. (Y/N):  ";
    cin >> healFifteen;
    healFifteen = toupper(healFifteen);
    if (healFifteen == 'Y') 
    {
        hero.setHealth(100);
        cout << "You healed to " << hero.getHealth() << " HP" << endl;
    }
    else if (healFifteen == 'N') 
    {
        cout << "You chose not to heal. Kinda not a big brain play." << endl;
    }
    else 
    {
        cout << "That is not one of the options. Please choose one of the options." << endl;
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
            cout << "You dont have the key to get into this room" << endl;
            roomFifteen(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
        }
    }
    else if (moveRoomFifteen == 'D') 
    {
        roomThirteen(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else 
    {
        cout << "There is no door there. Please use your brain." << endl;
        roomFifteen(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
}

// Room 16 with Final Boss
void roomBoss(Hero &hero, MiniBoss &dragon, Boss &cthulhu, BaseEnemy &ghostFive, BaseEnemy &ghostEleven, BaseEnemy &ghostThirteen) 
{
    cout << "Congratulations you have made it to the final boss, Cthulu" << endl;
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
        cout << "What would you like your name to be?" << endl;
        cin >> heroName;
        cout << "Welcome " << heroName << " it is nice of you to play the game" << endl;
        cout << heroName << " awakens in a room with a campfire, unsure of what to do " << heroName << " checks the walls for any hidden things." << endl;
        cout << "As " << heroName << " checks the walls they find a list of things to do. To escape make it to the end and defeat Cuthulu, find the Dragon somewhere in the rooms and ";
        cout << "kill it. But don't die while your at it or you lose." << endl;
        startingRoom(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
    }
    else if (playGame == 'N') 
    {
        cout << "We will be waiting for you to come back and play." << endl;
        start();
    }
    else 
    {
        cout << "that is not an option. Please select one of the options" << endl;
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
            cout << "You see a ghost blocking your way. What do you do. Fight (F), Check (C), Run (R)" << endl;
            cin >> heroAttack;
            heroAttack = toupper(heroAttack);
            if (heroAttack == 'F') 
            {
                ghostFive.ghostBlackjack(hero);
                hero.heroKilled();
            }
            else if (heroAttack == 'C') 
            {
                cout << "\n Greg\nCreature: Ghost\nHealth:" << ghostFive.health << "\nDefence: 0\nAttack: "<< ghostFive.damage <<"\nSpeed: 3" << endl;
                cout << "The ghost attacked you for 5 damage" << endl;
                hero.setHealth(hero.getHealth() - ghostFive.damage);
                hero.heroKilled();
                ghostFiveFight(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
            }
            else if (heroAttack == 'R') 
            {
                cout << "You tried to escape but the ghost blocked the way" << endl;
                cout << "The ghost attacked you for 5 damage" << endl;
                hero.setHealth(hero.getHealth() - ghostFive.damage);
                hero.heroKilled();
                ghostFiveFight(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
            }
            else 
            {
                cout << "That is not an opton please select one of the options" << endl;
                ghostFiveFight(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
            }
        }
    }
    else if (ghostFive.killedEnemy() == true) 
    {
        cout << "You have aleady killed the ghost." << endl;
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
            cout << "You see a ghost blocking your way. What do you do. Fight (F), Check (C), Run (R)" << endl;
            cin >> heroAttack;
            heroAttack = toupper(heroAttack);
            if (heroAttack == 'F') 
            {
                ghostEleven.ghostBlackjack(hero);
                hero.heroKilled();
            }
            else if (heroAttack == 'C') 
            {
                cout << "\n Greg\nCreature: Ghost\nHealth:" << ghostEleven.health << "\nDefence: 0\nAttack: "<< ghostEleven.damage <<"\nSpeed: 3" << endl;
                cout << "The ghost attacked you for 5 damage" << endl;
                hero.setHealth(hero.getHealth() - ghostEleven.damage);
                hero.heroKilled();
                ghostElevenFight(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
            }
            else if (heroAttack == 'R') 
            {
                cout << "You tried to escape but the ghost blocked the way" << endl;
                cout << "The ghost attacked you for 5 damage" << endl;
                hero.setHealth(hero.getHealth() - ghostEleven.damage);
                hero.heroKilled();
                ghostElevenFight(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
            }
            else 
            {
                cout << "That is not an opton please select one of the options" << endl;
                ghostElevenFight(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
            }
        }
    }
    else if (ghostEleven.killedEnemy() == true) 
    {
        cout << "You have aleady killed the ghost." << endl;
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
            cout << "You see a ghost blocking your way. What do you do. Fight (F), Check (C), Run (R)" << endl;
            cin >> heroAttack;
            heroAttack = toupper(heroAttack);
            if (heroAttack == 'F') 
            {
                ghostThirteen.ghostBlackjack(hero);
                hero.heroKilled();
            }
            else if (heroAttack == 'C') 
            {
                cout << "\n Greg\nCreature: Ghost\nHealth:" << ghostThirteen.health << "\nDefence: 0\nAttack: "<< ghostThirteen.damage <<"\nSpeed: 3" << endl;
                cout << "The ghost attacked you for 5 damage" << endl;
                hero.setHealth(hero.getHealth() - ghostThirteen.damage);
                hero.heroKilled();
                ghostThirteenFight(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
            }
            else if (heroAttack == 'R')
            {
                cout << "You tried to escape but the ghost blocked the way" << endl;
                cout << "The ghost attacked you for 5 damage" << endl;
                hero.setHealth(hero.getHealth() - ghostThirteen.damage);
                hero.heroKilled();
                ghostThirteenFight(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
            }
            else 
            {
                cout << "That is not an opton please select one of the options" << endl;
                ghostThirteenFight(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
            }
        }
    }
    else if (ghostThirteen.killedEnemy() == true) 
    {
        cout << "You have aleady killed the ghost." << endl;
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
            cout << "Fight (F), Check (C), Run (R)" << endl;
            cin >> heroAttack;
            heroAttack = toupper(heroAttack);
            if (heroAttack == 'F')
            {
                cthulhu.bossBlackjack(hero);
                hero.heroKilled();
            }
            else if (heroAttack == 'C')
            {
                cout << "\nCthulu\nCreature: Ancient God\nHealth: " << cthulhu.health << "\nDefence: 35\nAttack: " << cthulhu.damage << "\nSpeed: inmobile" << endl;
                cout << "Cthulhu attacked you for 25 damage" << endl;
                hero.setHealth(hero.getHealth() - cthulhu.damage);
                hero.heroKilled();
                cthulhuFight(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
            }
            else if (heroAttack == 'R')
            {
                cout << "You tried to escape but there is way no way out." << endl;
                cout << "Cthulhu attacked you for 25 damage" << endl;
                hero.setHealth(hero.getHealth() - cthulhu.damage);
                hero.heroKilled();
                cthulhuFight(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
            }
            else
            {
                cout << "That is not an opton please select one of the options" << endl;
                cthulhuFight(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
            }
        }
    }
    else if (cthulhu.killedCthulhu() == true) 
    {
        cout << "You have killed Cthulhu" << endl;
        cout << "Congratulations your prize is a Pizza Hut Hershey Cookie!!" << endl;
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
            cout << "Fight (F), Check (C), Run (R)" << endl;
            cin >> heroAttack;
            heroAttack = toupper(heroAttack);
            if (heroAttack == 'F') 
            {
                dragon.dragonBlackjack(hero);
                hero.heroKilled();
            }
            else if (heroAttack == 'C')
            {
                cout << "\nSami\nCreature: Dragon\nHealth: " << dragon.health << "\nDefence: 10\nAttack: " << dragon.damage << "\nSpeed:40" << endl;
                cout << "Sami attacked you for 5 damage" << endl;
                hero.setHealth(hero.getHealth() - dragon.damage);
                hero.heroKilled();
                dragonFight(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
            }
            else if (heroAttack == 'R')
            {
                cout << "You tried to escape but Sami's tail blocked the way" << endl;
                cout << "Sami attacked you for 5 damage" << endl;
                hero.setHealth(hero.getHealth() - dragon.damage);
                hero.heroKilled();
                dragonFight(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
            }
            else
            {
                cout << "That is not an opton please select one of the options" << endl;
                dragonFight(hero, dragon, cthulhu, ghostFive, ghostEleven, ghostThirteen);
            }
        }
    }
    else if (dragon.killedDragon() == true)
    {
        cout << "You have aleady killed the Sami the Dragon." << endl;
    }
}

int main() 
{ 
    start();
}