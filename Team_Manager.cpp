#include "Team_Manager.h"
#include <vector>

using namespace std;

Team Team_Manager::GenerateNewTeam(vector <Player> Players, vector <Hero> Heroes, string Team_Name) {

	Team team;
    

	for (int i = 0; i < 5; i++) {

		Team_Part part; 

		part.hero = Heroes[i];
		part.player = Players[i];
		
		team.Connected.push_back(part);

	}

	

	team.Team_Name = Team_Name;

	return team;

}

void Team_Manager::GetTeamInfo(Team team) {

	cout << team.Team_Name << endl;

	for (int i = 0; i < 5; i++) {

		cout << team.Connected[i].player.Player_Name << endl;
		cout << team.Connected[i].hero.Hero_Name << endl;

	}

}
