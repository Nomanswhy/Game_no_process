#pragma once 
#include <string>
#include <vector>
#include "Player.h"
#include "Hero.h"

using namespace std;

struct Team_Part {

	Player player;
	Hero hero;

};

class Team {
public:

	string Team_Name; 

	vector <Team_Part> Connected;

};
