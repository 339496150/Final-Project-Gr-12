#include <iostream>
#include <string>
#include "Classes.hpp"

using namespace std;

// Allows all the functions to call one another
void startingRoom(Player &player);
void roomTwo(Player &player);
void roomThree(Player &player);
void roomMiniBoss(Player &player);
void roomFive(Player &player);
void roomSix(Player &player);
void roomSeven(Player &player);
void roomEight(Player &player);
void roomNine(Player &player);
void roomTen(Player &player);
void roomEleven(Player &player);
void roomTwelve(Player &player);
void roomThirteen(Player &player);
void roomFourteen(Player &player);
void roomFifteen(Player &player);
void roomBoss(Player &player);
void cthulhuFight(Player &player);
void dragonFight(Player &player);
void ghostFiveFight(Player &player);
void ghostElevenFight(Player &player);
void ghostThirteenFight(Player &player);
void playerKilled(Player &player);

// First room
void startingRoom(Player &player) 
{
    char moveRoomOne;
    cout << "Welcome to room 1\n";
    cout << "Walk down to room 5 (S) or walk left to room 2 (A):  ";
    cin >> moveRoomOne;
    moveRoomOne = toupper(moveRoomOne);
    if (moveRoomOne == 'A') 
    {
        roomTwo(player);
    }
    else if (moveRoomOne == 'S') 
    {
        roomFive(player);
    }
    else 
    {
        cout << "There is no door there. Please use your brain.\n";
        startingRoom(player);
    }
}

// Room 2
void roomTwo(Player &player) 
{
    char moveRoomTwo;
    cout << "Welcome to room 2\n";
    cout << "Walk down to room 6 (S), walk left to room 3 (A), or walk right to room 1 (D):  ";
    cin >> moveRoomTwo;
    moveRoomTwo = toupper(moveRoomTwo);
    if (moveRoomTwo == 'A') 
    {
        roomThree(player);
    }
    else if (moveRoomTwo == 'D') 
    {
        startingRoom(player);
    }
    else if (moveRoomTwo == 'S') 
    {
        roomSix(player);
    }
    else 
    {
        cout << "There is no door there. please use your brain\n";
        roomTwo(player);
    }
}

// Room 3
void roomThree(Player &player) 
{
    char moveRoomThree;
    cout << "Welcome to room 3\n";
    cout << "Walk down to room 7 (S), walk left to room 4 (A), or walk right to room 2 (D):  ";
    cin >> moveRoomThree;
    moveRoomThree = toupper(moveRoomThree);
    if (moveRoomThree == 'A') 
    {
        roomMiniBoss(player);
    }
    else if (moveRoomThree == 'D') 
    {
        roomTwo(player);
    }
    else if (moveRoomThree == 'S') 
    {
        roomSeven(player);
    }
    else 
    {
        cout << "There is no door there. Please use your brain.\n";
        roomThree(player);
    }
}

// Room 4 with mini boss
void roomMiniBoss(Player &player)
{
    char moveRoomFour;
    cout << "Welcome to room 4\n";
    cout << "As you enter the room you see a large dragon resting on the ground, you deside to name it Sami.\n";
    dragonFight(player);
    cout << "Walk down to room 8 (S) or walk right to room 3 (D):  ";
    cin >> moveRoomFour;
    moveRoomFour = toupper(moveRoomFour);
    if (moveRoomFour == 'S') 
    {
        roomEight(player);
    }
    else if (moveRoomFour == 'D') 
    {
        roomThree(player);
    }
    else 
    {
        cout << "There is no door there. Please use your brain.\n";
        roomMiniBoss(player);
    }
}

// Room 5
void roomFive(Player &player) 
{
    BaseEnemy ghostFive;
    ghostFive.deadOrAlive(true);
    char key, moveRoomFive;
    ghostFiveFight(player);
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
            roomFive(player);
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
        roomSix(player);
    }
    else if (moveRoomFive == 'W') 
    {
        startingRoom(player);
    }
    else if (moveRoomFive == 'S') 
    {
        roomNine(player);
    }
    else 
    {
        cout << "There is no door there. Please use your brain.\n";
        roomFive(player);
    }
}

// Room 6
void roomSix(Player &player) 
{
    char moveRoomSix;
    cout << "Welcome to room 6\n";
    cout << "Walk up to room 2 (W), walk down to room 10 (S), walk left to room 7 (A), or walk right to room 5 (D):  ";
    cin >> moveRoomSix;
    moveRoomSix = toupper(moveRoomSix);
    if (moveRoomSix == 'A') 
    {
        roomSeven(player);
    }
    else if (moveRoomSix == 'W') 
    {
        roomTwo(player);
    }
    else if (moveRoomSix == 'S') 
    {
        roomTen(player);
    }
    else if (moveRoomSix == 'D') 
    {
        roomFive(player);
    }
    else 
    {
        cout << "There is no door there. Please use your brain.\n";
        roomSix(player);
    }
}

// Room 7
void roomSeven(Player &player) 
{
    char moveRoomSeven;
    cout << "Welcome to room 7\n";
    cout << "Walk up to room 3 (W), walk down to room 11 (S), walk left to room 8 (A), or walk right to room 6 (D):  ";
    cin >> moveRoomSeven;
    moveRoomSeven = toupper(moveRoomSeven);
    if (moveRoomSeven == 'W') 
    {
        roomThree(player);
    }
    else if (moveRoomSeven == 'A') 
    {
        roomEight(player);
    }
    else if (moveRoomSeven == 'S') 
    {
        roomEleven(player);
    }
    else if (moveRoomSeven == 'D') 
    {
        roomSix(player);
    }
    else {
        cout << "There is no door there. Please use your brain.\n";
        roomSeven(player);
    }
}

// Room 8
void roomEight(Player &player) 
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
        roomEight(player);
    }
    cout << "Walk up to room 4 (W), walk down to room 16 (S), or walk right to room 7 (D):  ";
    cin >> moveRoomEight;
    moveRoomEight = toupper(moveRoomEight);
    if (moveRoomEight == 'D') 
    {
        roomSeven(player);
    }
    else if (moveRoomEight == 'W') 
    {
        roomMiniBoss(player);
    }
    else if (moveRoomEight == 'S') 
    {
        if (player.keyCheck() == true) 
        {
            roomBoss(player);
        }
        else if (player.keyCheck() == false) 
        {
            cout << "You dont have the key to get into this room.\n";
            roomEight(player);
        }
    }
    else 
    {
        cout << "There is no door there. Please use your brain.\n";
        roomEight(player);
    }
}

// Room 9
void roomNine(Player &player)
{
    char moveRoomNine;
    cout << "Welcome to room 9\n";
    cout << "Walk up to room 5 (W), walk down to room 12 (S), or walk left to room 10 (A):  ";
    cin >> moveRoomNine;
    moveRoomNine = toupper(moveRoomNine);
    if (moveRoomNine == 'A') 
    {
        roomTen(player);
    }
    else if (moveRoomNine == 'W') 
    {
        roomFive(player);
    }
    else if (moveRoomNine == 'S') 
    {
        roomTwelve(player);
    }
    else 
    {
        cout << "There is no door there. Please use your brain.\n";
        roomNine(player);
    }
}

// Room 10 THERE IS A TRAP IN THIS ROOM IF YOU TRY TO ENTER ROOM 11
void roomTen(Player &player) 
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
        roomTen(player);
    }
    cout << "Walk up to room 6 (W), walk down to room 14 (S), walk left to room 11 (A), or walk back to room 9 (D):  ";
    cin >> moveRoomTen;
    moveRoomTen = toupper(moveRoomTen);
    if (moveRoomTen == 'W') 
    {
        roomSix(player);
    }
    else if (moveRoomTen == 'A') 
    {
        cout << "As you walk through the hall way you see spikes poking out of the wall\n";
        cout << "As you walk past them they activate and you get hit\n";
        cout << "The spikes deal 50 damage\n";
        player.setHealth(player.getHealth() - 50);
        playerKilled(player);
        cout << "You have " << player.getHealth() << "HP.\n\n";
        roomEleven(player);
    }
    else if (moveRoomTen == 'S') 
    {
        roomFourteen(player);
    }
    else if (moveRoomTen == 'D') 
    {
        roomNine(player);
    }
    else 
    {
        cout << "There is no door there. Please use your brain.\n";
        roomTen(player);
    }
}

// Room 11
void roomEleven(Player &player) 
{
    char moveRoomEleven;
    cout << "Welcome to room 11\n";
    ghostElevenFight(player);
    cout << "Walk up to room 7 (W), walk down to room 15 (S), walk left to room 16 (A), or walk right to room 10 (D):  ";
    cin >> moveRoomEleven;
    moveRoomEleven = toupper(moveRoomEleven);
    if (moveRoomEleven == 'W') 
    {
        roomSeven(player);
    }
    else if (moveRoomEleven == 'A') 
    {
        if (player.keyCheck() == true) 
        {
            roomBoss(player);
        }
        else if (player.keyCheck() == false) 
        {
            cout << "You dont have the key to get into this room\n";
            roomEleven(player);
        }
    }
    else if (moveRoomEleven == 'S') 
    {
        roomFifteen(player);
    }
    else if (moveRoomEleven == 'D') 
    {
        roomTen(player);
    }
    else 
    {
        cout << "There is no door there. Please use your brain.\n";
        roomEleven(player);
    }
}

// Room 12 THIS ROOM HAS A TRAP IF YOU TRY TO GO TO ROOM 13
void roomTwelve(Player &player) 
{
    char moveRoomTwelve;
    cout << "Welcome to room 12\n";
    cout << "Walk up to room 9 (W), walk down to room 13 (S), or walk left to room 14 (A):  ";
    cin >> moveRoomTwelve;
    moveRoomTwelve = toupper(moveRoomTwelve);
    if (moveRoomTwelve == 'W') 
    {
        roomNine(player);
    }
    else if (moveRoomTwelve == 'A') 
    {
        roomFourteen(player);
    }
    else if (moveRoomTwelve == 'S') 
    {
        cout << "As you walk through the hall way you see spikes poking out of the wall\n";
        cout << "As you walk past them they activate and you get hit.\n";
        cout << "The spikes deal 50 damage\n";
        player.setHealth(player.getHealth() - 50);
        playerKilled(player);
        cout << "You have " << player.getHealth() << " HP\n";
        roomThirteen(player);
    }
    else 
    {
        cout << "There is no door there. Please use your brain.\n";
        roomTwelve(player);
    }
}

// Room 13
void roomThirteen(Player &player) 
{
    char moveRoomThirteen;
    ghostThirteenFight(player);
    cout << "Welcome to room 13\n";
    cout << "Walk up to room 14 (W), walk left to room 15 (A), or walk right to room 12 (D):  ";
    cin >> moveRoomThirteen;
    moveRoomThirteen = toupper(moveRoomThirteen);
    if (moveRoomThirteen == 'W') 
    {
        roomFourteen(player);
    }
    else if (moveRoomThirteen == 'A') 
    {
        roomFifteen(player);
    }
    else if (moveRoomThirteen == 'D') 
    {
        roomTwelve(player);
    }
    else 
    {
        cout << "There is no door there. Please use your brain.\n";
        roomThirteen(player);
    }
}

// Room 14
void roomFourteen(Player &player) 
{
    char moveRoomFourteen;
    cout << "Welcome to room 14\n";
    cout << "Walk up to room 10 (W), walk down to room 13 (S), walk left to room 15 (A), or walk right to room 12 (D):  ";
    cin >> moveRoomFourteen;
    moveRoomFourteen = toupper(moveRoomFourteen);
    if (moveRoomFourteen == 'W') 
    {
        roomTen(player);
    }
    else if (moveRoomFourteen == 'A') 
    {
        roomFifteen(player);
    }
    else if (moveRoomFourteen == 'S') 
    {
        roomThirteen(player);
    }
    else if (moveRoomFourteen == 'D') 
    {
        roomTwelve(player);
    }
    else 
    {
        cout << "There is no door there. Please use your brain.\n";
        roomFourteen(player);
    }
}

// Room 15
void roomFifteen(Player &player) 
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
        roomFifteen(player);
    }
    cout << "Walk up to room 11 (W), walk down to room 14 (S), walk left to room 16 (A), or walk right to room 13 (D):  ";
    cin >> moveRoomFifteen;
    moveRoomFifteen = toupper(moveRoomFifteen);
    if (moveRoomFifteen == 'W') 
    {
        roomEleven(player);
    }
    else if (moveRoomFifteen == 'S') 
    {
        roomFourteen(player);
    }
    else if (moveRoomFifteen == 'A') 
    {
        if (player.keyCheck() == true) 
        {
            roomBoss(player);
        }
        else if (player.keyCheck() == false) 
        {
            cout << "You dont have the key to get into this room\n";
            roomFifteen(player);
        }
    }
    else if (moveRoomFifteen == 'D') 
    {
        roomThirteen(player);
    }
    else 
    {
        cout << "There is no door there. Please use your brain.\n";
        roomFifteen(player);
    }
}

// Room 16 with Final Boss
void roomBoss(Player &player) 
{
    cout << "Congratulations you have made it to the final boss, Cthulu\n";
    cthulhuFight(player);
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
        startingRoom(player);
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
void ghostFiveFight(Player &player, BaseEnemy &ghostFive) 
{
    char playerAttack;
    if (ghostFive.enemyAliveOut() == true) 
    {
        while (player.getHealth() > 0 && ghostFive.health > 0) 
        {
            cout << "You see a ghost blocking your way. What do you do. Fight (F), "
                "Check (C), Run (R)\n";
            cin >> playerAttack;
            playerAttack = toupper(playerAttack);
            if (playerAttack == 'F') 
            {
                cout << "you managed to get a hit on the enemy\n";
                ghostFive.health - 20;
                cout << "You killed the ghost\n";
                ghostFive.deadOrAlive(false);
                break;
            }
            else if (playerAttack == 'C') 
            {
                cout << "\n Greg\nCreature: Ghost\nHealth:" << ghostFive.health << "\nDefence: 0\nAttack: "<< ghostFive.damage <<"\nSpeed: 3\n";
                cout << "The ghost attacked you for 5 damage\n";
                player.setHealth(player.getHealth() - 5);
                playerKilled(player);
                ghostFiveFight(player);
            }
            else if (playerAttack == 'R') 
            {
                cout << "You tried to escape but the ghost blocked the way\n";
                cout << "The ghost attacked you for 5 damage\n";
                player.setHealth(player.getHealth() - 5);
                playerKilled(player);
                ghostFiveFight(player);
            }
            else 
            {
                cout << "That is not an opton please select one of the options\n";
                ghostFiveFight(player);
            }
        }
    }
    else if (ghostFive.enemyAliveOut() == false) 
    {
        cout << "You have aleady killed the ghost.\n";
    }
}

// Ghost fight in room 8
void ghostElevenFight(Player &player, BaseEnemy &ghostEleven) 
{
    char playerAttack;
    if (ghostEleven.enemyAliveOut() == true) 
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
                break;
            }
            else if (playerAttack == 'C') 
            {
                cout << "\n Greg\nCreature: Ghost\nHealth:" << ghostEleven.health << "\nDefence: 0\nAttack: "<< ghostEleven.damage <<"\nSpeed: 3\n";
                cout << "The ghost attacked you for 5 damage\n";
                player.setHealth(player.getHealth() - 5);
                playerKilled(player);
                ghostElevenFight(player);
            }
            else if (playerAttack == 'R') 
            {
                cout << "You tried to escape but the ghost blocked the way\n";
                cout << "The ghost attacked you for 5 damage\n";
                player.setHealth(player.getHealth() - 5);
                playerKilled(player);
                ghostElevenFight(player);
            }
            else 
            {
                cout << "That is not an opton please select one of the options\n";
                ghostElevenFight(player);
            }
        }
    }
    else if (ghostEleven.enemyAliveOut() == false) 
    {
        cout << "You have aleady killed the ghost.\n";
    }
}

// Ghost fight in room 13
void ghostThirteenFight(Player &player, BaseEnemy &ghostThirteen) 
{
    char playerAttack;
    if (ghostThirteen.enemyAliveOut() == true) 
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
                break;
            }
            else if (playerAttack == 'C') 
            {
                cout << "\n Greg\nCreature: Ghost\nHealth:" << ghostThirteen.health << "\nDefence: 0\nAttack: "<< ghostThirteen.damage <<"\nSpeed: 3\n";
                cout << "The ghost attacked you for 5 damage\n";
                player.setHealth(player.getHealth() - 5);
                playerKilled(player);
                ghostThirteenFight(player);
            }
            else if (playerAttack == 'R')
            {
                cout << "You tried to escape but the ghost blocked the way\n";
                cout << "The ghost attacked you for 5 damage\n";
                player.setHealth(player.getHealth() - 5);
                playerKilled(player);
                ghostThirteenFight(player);
            }
            else 
            {
                cout << "That is not an opton please select one of the options\n";
                ghostThirteenFight(player);
            }
        }
    }
    else if (ghostThirteen.enemyAliveOut() == false) 
    {
        cout << "You have aleady killed the ghost.\n";
    }
}

// Final Boss Fight in room 16 (roomBoss)
void cthulhuFight(Player &player)
{
    Boss cthulhu;
    char playerAttack;
    if (cthulhu.cthulhuAliveOut() == true)
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
                        cthulhuFight(player);
                    }
                }
            }
            else if (playerAttack == 'C')
            {
                cout << "\nCthulu\nCreature: Ancient God\nHealth: " << cthulhu.health << "\nDefence: 35\nAttack: " << cthulhu.damage << "\nSpeed: inmobile\n";
                cout << "Cthulhu attacked you for 25 damage\n";
                player.setHealth(player.getHealth() - 25);
                playerKilled(player);
                cthulhuFight(player);
            }
            else if (playerAttack == 'R')
            {
                cout << "You tried to escape but there is way no way out.\n";
                cout << "Cthulhu attacked you for 25 damage\n";
                player.setHealth(player.getHealth() - 25);
                playerKilled(player);
                cthulhuFight(player);
            }
            else
            {
                cout << "That is not an opton please select one of the options\n";
                cthulhuFight(player);
            }
        }
    }
    else if (cthulhu.cthulhuAliveOut() == false) 
    {
        cout << "You have killed Cthulhu\n";
        cout << "Congratulations your prize is a Pizza Hut Hershey Cookie!!\n";
        exit(0);
    }
}

// Dragon fight in room 4
void dragonFight(Player &player, MiniBoss dragon) 
{
    char playerAttack;
    if (dragon.dragonAliveOut() == true) 
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
                dragonFight(player);
            }
            else if (playerAttack == 'R')
            {
                cout << "You tried to escape but Sami's tail blocked the way\n";
                cout << "Sami attacked you for 5 damage\n";
                player.setHealth(player.getHealth() - 20);
                playerKilled(player);
                dragonFight(player);
            }
            else
            {
                cout << "That is not an opton please select one of the options\n";
                dragonFight(player);
            }
        }
    }
    else if (dragon.dragonAliveOut() == false)
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