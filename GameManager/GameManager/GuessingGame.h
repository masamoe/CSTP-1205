#pragma once
#include <iostream>
#include "GameManager.h"
#include "PlayerOptions.h"
#include "Player.h"

using namespace std;

class GuessingGame
{
private:
    bool RunGame();
    Player GetPlayerInformation();
    void WelcomePlayer(const string &name);

public:
    void StartGame();
};