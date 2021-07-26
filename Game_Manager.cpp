#include "Game_Manager.h"
#include "Team_Manager.h"
#include "Session.h"

#include <stdlib.h>
#include <string>

void Game_Manager::Perform_Game_Session(Hero_Manager Hero_Manager, Player_Manager Player_Manager) {

	vector <Player> Temp_Players = Player_Manager.Players;
	vector <Hero> Temp_Heroes = Hero_Manager.Heroes;

	vector <Team_Part> Temp_Team_One;
	vector <Team_Part> Temp_Team_Two;

	for (int i = 0; i < 5; i++) {

		Temp_Team_One.push_back(Create_Team_Part(Temp_Players, Temp_Heroes));
		Temp_Team_Two.push_back(Create_Team_Part(Temp_Players, Temp_Heroes));

	}

	Team_Manager team_manager; 

	Team Team_One = team_manager.GenerateNewTeam(Temp_Team_One, "Red");
	Team Team_Two = team_manager.GenerateNewTeam(Temp_Team_Two, "Blue");

	Session current_session;

	bool Result = current_session.Calculate_Winner(Team_One, Team_Two);

	for (int i = 0; i < 5; i++) {

		Player player_team_one = Player_Manager.GetPlayerByID(Team_One.Connected[i].player.Player_ID);
		player_team_one.Player_Rank += (Result ? 25 : -25);

		Player player_team_two = Player_Manager.GetPlayerByID(Team_Two.Connected[i].player.Player_ID);
		player_team_two.Player_Rank += (Result ? -25 : 25);

	}

	Sessions_List.push_back(current_session);

}

Team_Part Game_Manager::Create_Team_Part(vector <Player> &Temp_Players, vector <Hero> &Temp_Heroes) {

	Team_Part Temp;

	int Index = rand() % Temp_Players.size();

	auto Player_Copy = Temp_Players[Index];

	Temp_Players.erase(Temp_Players.begin() + Index);

	Index = rand() % Temp_Heroes.size();
	auto Hero_Copy = Temp_Heroes[Index];
	Temp_Heroes.erase(Temp_Heroes.begin() + Index);

	Temp.player = Player_Copy;
	Temp.hero = Hero_Copy;

	return Temp;

}
