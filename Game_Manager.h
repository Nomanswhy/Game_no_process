#pragma once
#include "Session.h"
#include "Hero_Manager.h"
#include "Player_Manager.h"
#include <list>

class Game_Manager
{
public:

    void Perform_Game_Session(Hero_Manager Hero_Manager, Player_Manager Player_Manager);
    Team_Part Create_Team_Part(vector <Player>& Temp_Players, vector <Hero>& Temp_Heroes);

    list <Session> Sessions_List;

};

