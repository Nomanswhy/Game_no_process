#include <iostream>
#include <vector>
#include "Player_Manager.h"

using namespace std;

void Player_Manager::Create_Player(string name) {

	Player New_Player;

	New_Player.Player_Name = name;
	New_Player.Player_Rank = 45;
	New_Player.Player_ID = Players.size() + 1;

	Players.push_back(New_Player);

}

Player Player_Manager::GetPlayerByName(string name) {

	for (int i = 0; i < Players.size(); i++) {

		if (Players[i].Player_Name == name) {

			return Players[i];

		}

	}

}

Player Player_Manager::GetPlayerByID(int ID) {

	for (int i = 0; i < Players.size(); i++) {

		if (Players[i].Player_ID == ID) {

			return Players[i];

		}

	}

}

void Player_Manager::Delete_Player(int ID, string name) {

	for (int i = 0; i < Players.size(); i++) {

		if (Players[i].Player_ID == ID && Players[i].Player_Name == name) {

			Players.erase(Players.begin() + i);

			break;

		}

	}

}

Player Player_Manager::ShowPlayerInfo(int ID, string name) {

	for (int i = 0; i < Players.size(); i++) {

		if (Players[i].Player_ID == ID || Players[i].Player_Name == name) {

			return Players[i];

		}

	}

}
