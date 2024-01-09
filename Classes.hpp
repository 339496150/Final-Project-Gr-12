#include <iostream>
#include <string>
#include <vector>

#pragma once

using namespace std;

class Player
{
    protected:
    int health;
    int damage = 5;

    public:
    void setHealth(int healthIn)
    {
        health = healthIn;
    }

    int gethealth()
    {
        return health;
    }
};

class MiniBoss
{
    public:
    int health = 30;
    int damage = 20;
};

class Boss
{
    public:
    int health = 50;
    int damage = 25;
};