#include <iostream>
#include "GameManager.h"
#include "PlayerOptions.h"
#include "Player.h"
#include "GuessingGame.h"

using namespace std;

void TestScope()
{
    Player player1;
    player1.SetName("test");
    GameManagement::WelcomePlayer(player1.GetName());

    Player player3;
    Player player2;
    player3 = player2 = player1;

    return;
}

void StartGameLoop()
{
    bool shouldRunGame = GameManagement::RunGame();
    while (shouldRunGame)
    {
        Player p1 = GameManagement::GetPlayerInformation();
        GameManagement::WelcomePlayer(p1.GetName());
        GuessingGame game;
        game.StartGame();
        shouldRunGame = GameManagement::RunGame();
    }
}

int main()
{
    StartGameLoop();
}
