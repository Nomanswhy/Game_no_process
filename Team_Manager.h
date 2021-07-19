#pragma once
#include "Team.h"
#include "Hero.h"
#include "Player.h"
#include <iostream>

class Team_Manager
{
public:
	Team GenerateNewTeam(vector <Player> Players, vector <Hero> Heroes, string Team_Name);
	void GetTeamInfo(Team team);

};

