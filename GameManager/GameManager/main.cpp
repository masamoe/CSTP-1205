#include <iostream>
#include "GameManager.h"

using namespace std;

void TestScope()
{
    Player player;
    player.SetName("test");
    GameManagement::WelcomePlayer(player.GetName());

    // bool shouldRunGame = true;
    // while (shouldRunGame)
    // {
    //     shouldRunGame = GameManagement::RunGame();
    // }
}

void TestGame()
{
    GameManagement::GivePlayerOptions();
    string playerInput;
    GameManagement::GetPlayerInput(playerInput);
    GameManagement::EvaluatePlayerInput(playerInput);

    Player p1 = GameManagement::GetPlayerInformation();
    GameManagement::WelcomePlayer(p1.GetName());
    bool shouldRunGame = true;
    while (shouldRunGame)
    {
        shouldRunGame = GameManagement::RunGame();
    }
}

int main()
{
    TestGame();
}

