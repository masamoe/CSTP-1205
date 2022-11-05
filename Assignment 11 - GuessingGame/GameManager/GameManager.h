#pragma once
#include <iostream>
#include "PlayerOptions.h"
#include "Player.h"

using namespace std;

namespace GameManagement
{
	void GivePlayerOptions();
	void GetPlayerInput(string &playerInput);
	PlayerOptions EvaluatePlayerInput(const string &input);
}