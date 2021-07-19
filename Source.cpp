#include <iostream>
#include "Player.h"
#include "Player_Manager.h"
#include "Hero_Manager.h"
#include "Hero.h"
#include "Team_Manager.h"
#include "Team.h"
using namespace std;

int main() {

    Player_Manager player_manager;

    for (int i = 0; i <= 4; i++) {

        player_manager.Create_Player("Bunny" + to_string(i));

    }

    cout << endl;

    Player found_player = player_manager.GetPlayerByName("Bunny3");

    cout << found_player.Player_ID << endl;

    Hero_Manager hero_manager;

    for (int i = 0; i < 5; i++) {

        hero_manager.Create_Hero(15, 15, "NoMan" + to_string(i));

    }

    Team_Manager team_manager; 

    auto team = team_manager.GenerateNewTeam(player_manager.Players, hero_manager.Heroes, "JustTEam" + 1);

    team_manager.GetTeamInfo(team);

    return 0;

}
