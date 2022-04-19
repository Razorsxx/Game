// Game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Stats
{
public:
    Stats()
    {
        HP = 100;
        MP = 500;
        STR = 10;
        DEF = 10;
        INT = 10;
    }

    void setStats(int charChoice)//will be called to set the stats based on what class they pick
    {
        if (charChoice == 1) //Warrior class
        {
            HP = 100;
            MP = 200;
            STR = 85;
            DEF = 45;
            INT = 35;
        }
        else if (charChoice == 2) //Mage Class
        {
            HP = 100;
            MP = 500;
            STR = 25;
            DEF = 26;
            INT = 95;
        }
        else if (charChoice == 3) //Tank Class
        {
            HP = 150;
            MP = 300;
            STR = 40;
            DEF = 85;
            INT = 12;
        }
    }

private://Private so they cant be accessed outside the class
    int HP;
    int MP;
    int STR;
    int DEF;
    int INT;
};

class RPGChar
{
public:
    string name;
    Stats stats;

    RPGChar()
    {
        name = "";
    }
};

class Monsters
{
public:
    string name;
    Stats stats;
    string specialAtk;

    Monsters()
    {
        name = "";
        specialAtk = "";
    }
};


int main()
{
    string ready;

    cout << "Welcome to the Dungeon\nWhen Ready Type 'OK': " << endl;
    cin >> ready;

    if (ready == "ok" || ready == "Ok" || ready == "OK")// checking if they typed ok to continue
    {

    }
}