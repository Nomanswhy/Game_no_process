#pragma once
#include "Team.h"

class Session
{
public: 

	bool Winner; 
	Team Team_One; 
	Team Team_Two;

	bool Calculate_Winner(Team Team_One, Team Team_Two);

};

