#include "Hero_Manager.h"
#include "Hero.h"
#include <iostream>
#include <vector>

using namespace std;

void Hero_Manager::Create_Hero(int Hero_HP, int Hero_Damage, string Hero_Name) {

	Hero New_Hero;

	New_Hero.Hero_HP = Hero_HP;
	New_Hero.Hero_Damage = Hero_Damage;
	New_Hero.Hero_ID = Heroes.size() + 1; 
	New_Hero.Hero_Name = Hero_Name; 

	Heroes.push_back(New_Hero);

}

Hero Hero_Manager::GetHeroByName(string name) {

	for (int i = 0; i < Heroes.size(); i++) {

		if (Heroes[i].Hero_Name == name) {

			return Heroes[i];

		}

	}

}

Hero Hero_Manager::GetHeroByID(int ID) {

	for (int i = 0; i < Heroes.size(); i++) {

		if (Heroes[i].Hero_ID == ID) {

			return Heroes[i];

		}

	}

}

void Hero_Manager::Delete_Hero(int ID, string name) {

	for (int i = 0; i < Heroes.size(); i++) {

		if (Heroes[i].Hero_ID == ID && Heroes[i].Hero_Name == name) {

			Heroes.erase(Heroes.begin() + i);

			break;

		}

	}

}

Hero Hero_Manager::ShowHeroInfo(int ID, string name) {

	for (int i = 0; i < Heroes.size(); i++) {

		if (Heroes[i].Hero_ID == ID || Heroes[i].Hero_Name == name) {

			return Heroes[i];

		}

	}

}

