#pragma once

#include <string>
#include <vector>
#include "Hero.h"
using namespace std;

class Hero_Manager {
public:

    void Create_Hero(int Hero_HP, int Hero_Damage, string Hero_Name);

    Hero GetHeroByName(string name);

    Hero GetHeroByID(int ID);

    void Delete_Hero(int ID, string name);

    Hero ShowHeroInfo(int ID, string name);

    vector<Hero> Heroes;
};