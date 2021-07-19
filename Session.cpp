#include "Session.h"

#include <iostream>

using namespace std; 

bool Session::Calculate_Winner(Team Team_One, Team Team_Two) {

	this->Team_One = Team_One;
	this->Team_Two = Team_Two;

	int team_one_HP;
	int team_one_Damage;
	int team_two_HP;
	int team_two_Damage;

	for (int i = 0; i < 5; i++) {

		team_one_HP += Team_One.Connected[i].hero.Hero_HP;
		team_one_Damage += Team_One.Connected[i].hero.Hero_Damage;
		team_two_HP += Team_Two.Connected[i].hero.Hero_HP;
		team_two_Damage += Team_Two.Connected[i].hero.Hero_Damage;

	}

	int leftover_one = team_one_HP - team_two_Damage;
	int leftover_two = team_two_HP - team_one_Damage;
	
	Winner = leftover_one > leftover_two;

	return Winner;

}