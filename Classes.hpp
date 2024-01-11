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
    bool haveKey;
    bool playerKilled;

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

    void playerAlive(bool death)
    {
        playerKilled = death;
    }

    bool playerCheck()
    {
        return playerKilled;
    }
};

class MiniBoss
{
    protected:
    bool dragonAlive;
    bool dragonKilled;

    public:
    int health = 30;
    int damage = 20;

    void deadOrAlive(bool deathCheck)
    {
        dragonAlive = deathCheck;
    }

    bool dragonAliveOut()
    {
        return dragonAlive;
    }

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
    bool cthulhuAlive;
    bool cthulhuKilled;

    public:
    int health = 50;
    int damage = 25;

    void deadOrAlive(bool deathCheck)
    {
        cthulhuAlive = deathCheck;
    }

    bool cthulhuAliveOut()
    {
        return cthulhuAlive;
    }

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
    bool enemyAlive;
    bool enemyKilled;

    public:
    int health = 20;
    int damage = 5;

    void deadOrAlive(bool deathCheck)
    {
        enemyAlive = deathCheck;
    }

    bool enemyAliveOut()
    {
        return enemyAlive;
    }

    void enemyDead(bool killedIn)
    {
        enemyKilled = killedIn;
    }

    bool killedEnemy()
    {
        return enemyKilled;
    }
};