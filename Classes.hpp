#include <iostream>
#include <string>
#include <vector>

#pragma once

using namespace std;

class Player
{
    protected:
    int health;
    int damage;
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
};