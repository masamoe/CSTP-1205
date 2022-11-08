#include <iostream>
#include "GuessingGame.h"
#include "GameManager.h"
#include "PlayerOptions.h"
#include "Player.h"

using namespace std;

// void TestScope()
// {
//     Player player1;
//     player1.SetName("test");
//     GameManagement::WelcomePlayer(player1.GetName());

//     Player player3;
//     Player player2;
//     player3 = player2 = player1;

//     return;
// }

void StartGameLoop()
{
    GuessingGame game;
    game.RunGame();
}

int main()
{
    StartGameLoop();
}
