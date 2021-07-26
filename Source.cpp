#include <iostream>
#include <algorithm>

#include "Player.h"
#include "Player_Manager.h"
#include "Hero.h"
#include "Hero_Manager.h"
#include "Team.h"
#include "Team_Manager.h"
#include "Game_Manager.h"

using namespace std;

int main() {

    Player_Manager player_manager;

    for (int i = 0; i <= 25; i++) {

        player_manager.Create_Player("Bunny" + to_string(i));

    }

    Hero_Manager hero_manager;

    for (int i = 0; i < 20; i++) {

        hero_manager.Create_Hero(15, 15, "NoMan" + to_string(i));

    }

    Game_Manager game_manager;

    game_manager.Perform_Game_Session(hero_manager, player_manager);

    

    for_each(game_manager.Sessions_List.begin(),
        game_manager.Sessions_List.end(),
        [](const auto& e) {
            cout << e.Winner << endl;
        });

    return 0;

}
