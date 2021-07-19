#pragma once
#include "Team.h"

class Session
{

	bool Winner; 
	Team Team_One; 
	Team Team_Two;

	bool Calculate_Winner(Team Team_One, Team Team_Two);

};

