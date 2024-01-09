#include <iostream>
#include <string>

using namespace std;

// Global Variables
int playerHealth = 100;
bool haveKey = false, keyAquired = false, ghostFiveAlive = true, ghostElevenAlive = true, ghostThirteenAlive = true, cthulhuAlive = true, dragonAlive = true;

// Allows all the functions to call one another
void startingRoom();
void roomTwo();
void roomThree();
void roomMiniBoss();
void roomFive();
void roomSix();
void roomSeven();
void roomEight();
void roomNine();
void roomTen();
void roomEleven();
void roomTwelve();
void roomThirteen();
void roomFourteen();
void roomFifteen();
void roomBoss();
void cthulhuFight();
void dragonFight();
void ghostFiveFight();
void ghostElevenFight();
void ghostThirteenFight();
void playerKilled();

// First room
void startingRoom() 
{
    char moveRoomOne;
    cout << "Welcome to room 1\n";
    cout << "Walk down to room 5 (S) or walk left to room 2 (A):  ";
    cin >> moveRoomOne;
    moveRoomOne = toupper(moveRoomOne);
    if (moveRoomOne == 'A') 
    {
        roomTwo();
    }
    else if (moveRoomOne == 'S') 
    {
        roomFive();
    }
    else 
    {
        cout << "There is no door there. Please use your brain.\n";
        startingRoom();
    }
}

// Room 2
void roomTwo() 
{
    char moveRoomTwo;
    cout << "Welcome to room 2\n";
    cout << "Walk down to room 6 (S), walk left to room 3 (A), or walk right to room 1 (D):  ";
    cin >> moveRoomTwo;
    moveRoomTwo = toupper(moveRoomTwo);
    if (moveRoomTwo == 'A') 
    {
        roomThree();
    }
    else if (moveRoomTwo == 'D') 
    {
        startingRoom();
    }
    else if (moveRoomTwo == 'S') 
    {
        roomSix();
    }
    else 
    {
        cout << "There is no door there. please use your brain\n";
        roomTwo();
    }
}

// Room 3
void roomThree() 
{
    char moveRoomThree;
    cout << "Welcome to room 3\n";
    cout << "Walk down to room 7 (S), walk left to room 4 (A), or walk right to room 2 (D):  ";
    cin >> moveRoomThree;
    moveRoomThree = toupper(moveRoomThree);
    if (moveRoomThree == 'A') 
    {
        roomMiniBoss();
    }
    else if (moveRoomThree == 'D') 
    {
        roomTwo();
    }
    else if (moveRoomThree == 'S') 
    {
        roomSeven();
    }
    else 
    {
        cout << "There is no door there. Please use your brain.\n";
        roomThree();
    }
}

// Room 4 with mini boss
void roomMiniBoss()
{
    char moveRoomFour;
    cout << "Welcome to room 4\n";
    cout << "As you enter the room you see a large dragon resting on the ground, you deside to name it Sami.\n";
    dragonFight();
    cout << "Walk down to room 8 (S) or walk right to room 3 (D):  ";
    cin >> moveRoomFour;
    moveRoomFour = toupper(moveRoomFour);
    if (moveRoomFour == 'S') 
    {
        roomEight();
    }
    else if (moveRoomFour == 'D') 
    {
        roomThree();
    }
    else 
    {
        cout << "There is no door there. Please use your brain.\n";
        roomMiniBoss();
    }
}

// Room 5
void roomFive() 
{
    char key, moveRoomFive;
    ghostFiveFight();
    if (keyAquired == false) 
    {
        cout << "Welcome to room 5\n";
        cout << "There is a key on the ground pick it up (P) or leave it (L):  ";
        cin >> key;
        key = toupper(key);
        if (key == 'P') 
        {
            cout << "you picked up the key\n";
            keyAquired = true;
        }
        else if (key == 'L') 
        {
            cout << "You chose to leave the key. That wasnt a good choice but ok.\n";
        }
        else 
        {
            cout << "That is an invalid imput\n";
            roomFive();
        }
    }
    else if (keyAquired == true) 
    {

        cout << "You have already grabbed the key\n";
    }
    cout << "Walk up to room 1 (W), walk down to room 9 (S), or walk left to room 6 (A):  ";
    cin >> moveRoomFive;
    moveRoomFive = toupper(moveRoomFive);
    if (moveRoomFive == 'A') 
    {
        roomSix();
    }
    else if (moveRoomFive == 'W') 
    {
        startingRoom();
    }
    else if (moveRoomFive == 'S') 
    {
        roomNine();
    }
    else {
        cout << "There is no door there. Please use your brain.\n";
        roomFive();
    }
}

// Room 6
void roomSix() 
{
    char moveRoomSix;
    cout << "Welcome to room 6\n";
    cout << "Walk up to room 2 (W), walk down to room 10 (S), walk left to room 7 (A), or walk right to room 5 (D):  ";
    cin >> moveRoomSix;
    moveRoomSix = toupper(moveRoomSix);
    if (moveRoomSix == 'A') {
        roomSeven();
    }
    else if (moveRoomSix == 'W') {
        roomTwo();
    }
    else if (moveRoomSix == 'S') {
        roomTen();
    }
    else if (moveRoomSix == 'D') {
        roomFive();
    }
    else {
        cout << "There is no door there. Please use your brain.\n";
        roomSix();
    }
}

// Room 7
void roomSeven() 
{
    char moveRoomSeven;
    cout << "Welcome to room 7\n";
    cout << "Walk up to room 3 (W), walk down to room 11 (S), walk left to room 8 (A), or walk right to room 6 (D):  ";
    cin >> moveRoomSeven;
    moveRoomSeven = toupper(moveRoomSeven);
    if (moveRoomSeven == 'W') {
        roomThree();
    }
    else if (moveRoomSeven == 'A') {
        roomEight();
    }
    else if (moveRoomSeven == 'S') {
        roomEleven();
    }
    else if (moveRoomSeven == 'D') {
        roomSix();
    }
    else {
        cout << "There is no door there. Please use your brain.\n";
        roomSeven();
    }
}

// Room 8
void roomEight() 
{
    char healEight, moveRoomEight;
    cout << "Welcome to room 8\n";
    cout << "You see a campfire in the middle of the room.\n";
    cout << "You heal " << playerHealth << " HP\n";
    cout << "The campfire's warmpth is comforting to you. Would you like to heal. (Y/N):  ";
    cin >> healEight;
    healEight = toupper(healEight);
    if (healEight == 'Y') {
        playerHealth = (100);
        cout << "You healed " << playerHealth << " HP\n";
    }
    else if (healEight == 'N') {
        cout << "You chose not to heal. Kinda not a big brain play.\n";
    }
    else {
        cout << "That is not one of the options. Please choose one of the "
            "options.\n";
        roomEight();
    }
    cout << "Walk up to room 4 (W), walk down to room 16 (S), or walk right to room 7 (D):  ";
    cin >> moveRoomEight;
    moveRoomEight = toupper(moveRoomEight);
    if (moveRoomEight == 'D') {
        roomSeven();
    }
    else if (moveRoomEight == 'W') {
        roomMiniBoss();
    }
    else if (moveRoomEight == 'S') {
        if (keyAquired == true) {
            roomBoss();
        }
        else if (keyAquired == false) {
            cout << "You dont have the key to get into this room.\n";
            roomEight();
        }
    }
    else {
        cout << "There is no door there. Please use your brain.\n";
        roomEight();
    }
}

// Room 9
void roomNine()
{
    char moveRoomNine;
    cout << "Welcome to room 9\n";
    cout << "Walk up to room 5 (W), walk down to room 12 (S), or walk left to room 10 (A):  ";
    cin >> moveRoomNine;
    moveRoomNine = toupper(moveRoomNine);
    if (moveRoomNine == 'A') {
        roomTen();
    }
    else if (moveRoomNine == 'W') {
        roomFive();
    }
    else if (moveRoomNine == 'S') {
        roomTwelve();
    }
    else {
        cout << "There is no door there. Please use your brain.\n";
        roomNine();
    }
}

// Room 10 THERE IS A TRAP IN THIS ROOM IF YOU TRY TO ENTER ROOM 11
void roomTen() 
{
    char healTen, moveRoomTen;
    cout << "Welcome to room 10\n";
    cout << "You see a campfire in the middle of the room.\n";
    cout << "You heal " << playerHealth << " HP\n";
    cout << "The campfire's warmpth is comforting to you. Would you like to heal. (Y/N):  ";
    cin >> healTen;
    healTen = toupper(healTen);
    if (healTen == 'Y') {
        playerHealth = 100;
        cout << "you healed " << playerHealth << " HP\n";
    }
    else if (healTen == 'N') {
        cout << "You chose not to heal. Kinda not a big brain play.\n";
    }
    else {
        cout << "That is not one of the options. Please choose one of the options.\n";
        roomTen();
    }
    cout << "Walk up to room 6 (W), walk down to room 14 (S), walk left to room 11 (A), or walk back to room 9 (D):  ";
    cin >> moveRoomTen;
    moveRoomTen = toupper(moveRoomTen);
    if (moveRoomTen == 'W') {
        roomSix();
    }
    else if (moveRoomTen == 'A') {
        cout << "As you walk through the hall way you see spikes poking out of the wall\n";
        cout << "As you walk past them they activate and you get hit\n";
        cout << "The spikes deal 50 damage\n";
        playerHealth = playerHealth - 50;
        playerKilled();
        cout << "You have " << playerHealth << "HP.\n\n";
        roomEleven();
    }
    else if (moveRoomTen == 'S') {
        roomFourteen();
    }
    else if (moveRoomTen == 'D') {
        roomNine();
    }
    else {
        cout << "There is no door there. Please use your brain.\n";
        roomTen();
    }
}

// Room 11
void roomEleven() 
{
    char moveRoomEleven;
    cout << "Welcome to room 11\n";
    ghostElevenFight();
    cout << "Walk up to room 7 (W), walk down to room 15 (S), walk left to room 16 (A), or walk right to room 10 (D):  ";
    cin >> moveRoomEleven;
    moveRoomEleven = toupper(moveRoomEleven);
    if (moveRoomEleven == 'W') {
        roomSeven();
    }
    else if (moveRoomEleven == 'A') {
        if (keyAquired == true) {
            roomBoss();
        }
        else if (keyAquired == false) {
            cout << "You dont have the key to get into this room\n";
            roomEleven();
        }
    }
    else if (moveRoomEleven == 'S') {
        roomFifteen();
    }
    else if (moveRoomEleven == 'D') {
        roomTen();
    }
    else {
        cout << "There is no door there. Please use your brain.\n";
        roomEleven();
    }
}

// Room 12 THIS ROOM HAS A TRAP IF YOU TRY TO GO TO ROOM 13
void roomTwelve() 
{
    char moveRoomTwelve;
    cout << "Welcome to room 12\n";
    cout << "Walk up to room 9 (W), walk down to room 13 (S), or walk left to room 14 (A):  ";
    cin >> moveRoomTwelve;
    moveRoomTwelve = toupper(moveRoomTwelve);
    if (moveRoomTwelve == 'W') {
        roomNine();
    }
    else if (moveRoomTwelve == 'A') {
        roomFourteen();
    }
    else if (moveRoomTwelve == 'S') {
        cout << "As you walk through the hall way you see spikes poking out of the wall\n";
        cout << "As you walk past them they activate and you get hit.\n";
        cout << "The spikes deal 50 damage\n";
        playerHealth = playerHealth - 50;
        playerKilled();
        cout << "You have " << playerHealth << " HP\n";
        roomThirteen();
    }
    else {
        cout << "There is no door there. Please use your brain.\n";
        roomTwelve();
    }
}

// Room 13
void roomThirteen() 
{
    char moveRoomThirteen;
    ghostThirteenFight();
    cout << "Welcome to room 13\n";
    cout << "Walk up to room 14 (W), walk left to room 15 (A), or walk right to room 12 (D):  ";
    cin >> moveRoomThirteen;
    moveRoomThirteen = toupper(moveRoomThirteen);
    if (moveRoomThirteen == 'W') {
        roomFourteen();
    }
    else if (moveRoomThirteen == 'A') {
        roomFifteen();
    }
    else if (moveRoomThirteen == 'D') {
        roomTwelve();
    }
    else {
        cout << "There is no door there. Please use your brain.\n";
        roomThirteen();
    }
}

// Room 14
void roomFourteen() 
{
    char moveRoomFourteen;
    cout << "Welcome to room 14\n";
    cout << "Walk up to room 10 (W), walk down to room 13 (S), walk left to room 15 (A), or walk right to room 12 (D):  ";
    cin >> moveRoomFourteen;
    moveRoomFourteen = toupper(moveRoomFourteen);
    if (moveRoomFourteen == 'W') {
        roomTen();
    }
    else if (moveRoomFourteen == 'A') {
        roomFifteen();
    }
    else if (moveRoomFourteen == 'S') {
        roomThirteen();
    }
    else if (moveRoomFourteen == 'D') {
        roomTwelve();
    }
    else {
        cout << "There is no door there. Please use your brain.\n";
        roomFourteen();
    }
}

// Room 15
void roomFifteen() 
{
    char healFifteen, moveRoomFifteen;
    cout << "Welcome to room 8\n";
    cout << "You see a campfire in the middle of the room.\n";
    cout << "You have " << playerHealth << " HP\n";
    cout << "The campfire's warmpth is comforting to you. Would you like to heal. (Y/N):  ";
    cin >> healFifteen;
    healFifteen = toupper(healFifteen);
    if (healFifteen == 'Y') 
    {
        playerHealth = (100);
        cout << "You healed " << playerHealth << " HP\n";
    }
    else if (healFifteen == 'N') 
    {
        cout << "You chose not to heal. Kinda not a big brain play.\n";
    }
    else 
    {
        cout << "That is not one of the options. Please choose one of the options.\n";
        roomFifteen();
    }
    cout << "Walk up to room 11 (W), walk down to room 14 (S), walk left to room 16 (A), or walk right to room 13 (D):  ";
    cin >> moveRoomFifteen;
    moveRoomFifteen = toupper(moveRoomFifteen);
    if (moveRoomFifteen == 'W') 
    {
        roomEleven();
    }
    else if (moveRoomFifteen == 'S') 
    {
        roomFourteen();
    }
    else if (moveRoomFifteen == 'A') 
    {
        if (keyAquired == true) 
        {
            roomBoss();
        }
        else if (keyAquired == false) 
        {
            cout << "You dont have the key to get into this room\n";
            roomFifteen();
        }
    }
    else if (moveRoomFifteen == 'D') 
    {
        roomThirteen();
    }
    else 
    {
        cout << "There is no door there. Please use your brain.\n";
        roomFifteen();
    }
}

// Room 16 with Final Boss
void roomBoss() 
{
    cout << "Congratulations you have made it to the final boss, Cthulu\n";
    cthulhuFight();
}

// Main Menu
void start() 
{
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
        startingRoom();
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
void ghostFiveFight() {
    int ghostFiveHealth = 20;
    char playerAttack;
    if (ghostFiveAlive == true) 
    {
        while (playerHealth > 0 && ghostFiveHealth > 0) 
        {
            cout << "You see a ghost blocking your way. What do you do. Fight (F), "
                "Check (C), Run (R)\n";
            cin >> playerAttack;
            playerAttack = toupper(playerAttack);
            if (playerAttack == 'F') 
            {
                cout << "you managed to get a hit on the enemy\n";
                ghostFiveHealth - 20;
                cout << "You killed the ghost\n";
                ghostFiveAlive = false;
                break;
            }
            else if (playerAttack == 'C') 
            {
                cout << "\n Greg\nCreature: Ghost\nHealth:" << ghostFiveHealth << "\nDefence: 0\nAttack: 5 \nSpeed: 3\n";
                cout << "The ghost attacked you for 5 damage\n";
                playerHealth = playerHealth - 5;
                playerKilled();
                ghostFiveFight();
            }
            else if (playerAttack == 'R') {
                cout << "You tried to escape but the ghost blocked the way\n";
                cout << "The ghost attacked you for 5 damage\n";
                playerHealth = playerHealth - 5;
                playerKilled();
                ghostFiveFight();
            }
            else {
                cout << "That is not an opton please select one of the options\n";
                ghostFiveFight();
            }
        }
    }
    else if (ghostFiveAlive == false) {
        cout << "You have aleady killed the ghost.\n";
    }
}

// Ghost fight in room 8
void ghostElevenFight() 
{
    int ghostElevenHealth = 20;
    char playerAttack;
    if (ghostElevenAlive == true) 
    {
        while (playerHealth > 0 && ghostElevenHealth > 0) 
        {
            cout << "You see a ghost blocking your way. What do you do. Fight (F), Check (C), Run (R)\n";
            cin >> playerAttack;
            playerAttack = toupper(playerAttack);
            if (playerAttack == 'F') 
            {
                cout << "you managed to get a hit on the enemy\n";
                ghostElevenHealth - 20;
                cout << "You killed the ghost\n";
                ghostElevenAlive = false;
                break;
            }
            else if (playerAttack == 'C') 
            {
                cout << "\n Greg\nCreature: Ghost\nHealth:" << ghostElevenHealth << "\nDefence: 0\nAttack: 5 \nSpeed: 3\n";
                cout << "The ghost attacked you for 5 damage\n";
                playerHealth = playerHealth - 5;
                playerKilled();
                ghostElevenFight();
            }
            else if (playerAttack == 'R') 
            {
                cout << "You tried to escape but the ghost blocked the way\n";
                cout << "The ghost attacked you for 5 damage\n";
                playerHealth = playerHealth - 5;
                playerKilled();
                ghostElevenFight();
            }
            else 
            {
                cout << "That is not an opton please select one of the options\n";
                ghostElevenFight();
            }
        }
    }
    else if (ghostElevenAlive == false) 
    {
        cout << "You have aleady killed the ghost.\n";
    }
}

// Ghost fight in room 13
void ghostThirteenFight() 
{
    int ghostThirteenHealth = 20;
    char playerAttack;
    if (ghostThirteenAlive == true) 
    {
        while (playerHealth > 0 && ghostThirteenHealth > 0) 
        {
            cout << "You see a ghost blocking your way. What do you do. Fight (F), Check (C), Run (R)\n";
            cin >> playerAttack;
            playerAttack = toupper(playerAttack);
            if (playerAttack == 'F') 
            {
                cout << "you managed to get a hit on the enemy\n";
                ghostThirteenHealth - 20;
                cout << "You killed the ghost\n";
                ghostThirteenAlive = false;
                break;
            }
            else if (playerAttack == 'C') 
            {
                cout << "\n Greg\nCreature: Ghost\nHealth:" << ghostThirteenHealth << "\nDefence: 0\nAttack: 5 \nSpeed: 3\n";
                cout << "The ghost attacked you for 5 damage\n";
                playerHealth = playerHealth - 5;
                playerKilled();
                ghostThirteenFight();
            }
            else if (playerAttack == 'R')
            {
                cout << "You tried to escape but the ghost blocked the way\n";
                cout << "The ghost attacked you for 5 damage\n";
                playerHealth = playerHealth - 5;
                playerKilled();
                ghostThirteenFight();
            }
            else 
            {
                cout << "That is not an opton please select one of the options\n";
                ghostThirteenFight();
            }
        }
    }
    else if (ghostThirteenAlive == false) 
    {
        cout << "You have aleady killed the ghost.\n";
    }
}

// Final Boss Fight in room 16 (roomBoss)
void cthulhuFight()
{
    int cthulhuHealth = 50;
    char playerAttack;
    if (cthulhuAlive == true)
    {
        while (playerHealth > 0 && cthulhuHealth > 0)
        {
            cout << "Fight (F), Check (C), Run (R)\n";
            cin >> playerAttack;
            playerAttack = toupper(playerAttack);
            if (playerAttack == 'F')
            {
                if (playerHealth <= 0)
                {
                    playerKilled();
                }
                else if (cthulhuHealth > 0)
                {
                    cthulhuHealth = cthulhuHealth - 20;
                    cout << "You hit Cthulhu\n";
                    cout << "Cthulhu's turn!\n";
                    cout << "Cthulhu attacked you for 25 damage\n";
                    playerHealth = playerHealth - 25;
                    if (cthulhuHealth <= 0)
                    {
                        cthulhuAlive = false;
                        cthulhuFight();
                    }
                }
            }
            else if (playerAttack == 'C')
            {
                cout << "\nCthulu\nCreature: Ancient God\nHealth: " << cthulhuHealth << "\nDefence: 35\nAttack: 25\nSpeed: inmobile\n";
                cout << "Cthulhu attacked you for 25 damage\n";
                playerHealth -= 25;
                playerKilled();
                cthulhuFight();
            }
            else if (playerAttack == 'R')
            {
                cout << "You tried to escape but there is way no way out.\n";
                cout << "Cthulhu attacked you for 25 damage\n";
                playerHealth = playerHealth - 25;
                playerKilled();
                cthulhuFight();
            }
            else
            {
                cout << "That is not an opton please select one of the options\n";
                cthulhuFight();
            }
        }
    }
    else if (cthulhuAlive == false) 
    {
        cout << "You have killed Cthulhu\n";
        cout << "Congratulations your prize is a Pizza Hut Hershey Cookie!!\n";
        exit(0);
    }
}

// Dragon fight in room 4
void dragonFight() 
{
    char playerAttack;
    int dragonHealth = 30;
    if (dragonAlive == true) 
    {
        while (playerHealth > 0 && dragonHealth > 0) 
        {
            cout << "Fight (F), Check (C), Run (R)\n";
            cin >> playerAttack;
            playerAttack = toupper(playerAttack);
            if (playerAttack == 'F') 
            {
                cout << "You managed to hit Sami\n";
                dragonHealth -= 20;
                cout << "Sami's turn!\n";
                cout << "Sami attacked you for 20 damage\n";
                playerHealth -= 20;
                if (dragonHealth <= 0) 
                {
                    dragonAlive = false;
                    cout << "You have killed Sami.\n";
                    break;
                }
            }
            else if (playerAttack == 'C')
            {
                cout << "\nSami\nCreature: Dragon\nHealth: " << dragonHealth
                    << "\nDefence: 10\nAttack: 20\nSpeed:40\n";
                cout << "Sami attacked you for 5 damage\n";
                playerHealth -= 20;
                playerKilled();
                dragonFight();
            }
            else if (playerAttack == 'R')
            {
                cout << "You tried to escape but Sami's tail blocked the way\n";
                cout << "Sami attacked you for 5 damage\n";
                playerHealth -= 20;
                playerKilled();
                dragonFight();
            }
            else
            {
                cout << "That is not an opton please select one of the options\n";
                dragonFight();
            }
        }
    }
    else if (dragonAlive == false)
    {
        cout << "You have aleady killed the Sami the Dragon.\n";
    }
}

// If the player dies
void playerKilled() 
{
    if (playerHealth <= 0) 
    {
        cout << "YOU'RE DEAD\n";
        exit(0);
    }
}

int main() 
{ 
    start(); 
}