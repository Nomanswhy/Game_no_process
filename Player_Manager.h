#pragma once 

#include <string>
#include <vector>
#include "Player.h"
using namespace std;

class Player_Manager {
public:

    void Create_Player(string name);

    Player GetPlayerByName(string name);

    Player GetPlayerByID(int ID);

    void Delete_Player(int ID, string name);

    Player ShowPlayerInfo(int ID, string name);

    vector <Player> Players;
};