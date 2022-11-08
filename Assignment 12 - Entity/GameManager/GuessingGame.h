#pragma once
#include <iostream>
#include "GameManager.h"
#include "PlayerOptions.h"
#include "Player.h"

using namespace std;

class GuessingGame : public Entity
{
private:
    void StartGame();
    Player GetPlayerInformation();
    void WelcomePlayer(const string &name);

public:
    void RunGame();
};