#include <iostream>
#include "GameManager.h"
#include "GuessingGame.h"

using namespace std;

void GameManagement::WelcomePlayer(const string &name)
{
    cout << "Welcome back " << name << " !" << endl;
}

bool GameManagement::RunGame()
{
    GameManagement::GivePlayerOptions();
    string playerInput;
    GameManagement::GetPlayerInput(playerInput);

    bool shouldRunGame = EvaluatePlayerInput(playerInput) != PlayerOptions::Quit;

    return shouldRunGame;
}

void GameManagement::GivePlayerOptions()
{
    // assignment 10:
    // provide the text that explains (lists) the options
    // ask user to enter the input

    cout << "Please enter one of the following options:" << endl;
    cout << "Play" << endl;
    cout << "Quit" << endl;
}

void GameManagement::GetPlayerInput(string &playerInput)
{
    cin >> playerInput;
}

PlayerOptions GameManagement::EvaluatePlayerInput(const string &input)
{
    // assignment 10: check the validity and return the appropriate enum value
    if (input == "Play")
    {
        return PlayerOptions::NewGame;
    }
    else if (input == "Quit")
    {
        return PlayerOptions::Quit;
    }
    else
    {
        return PlayerOptions::Unknown;
    }
}

Player GameManagement::GetPlayerInformation()
{
    // Get the Player username and player name from the console input
    string username;
    string name;

    cout << "Please enter your username: ";
    cin >> username;
    cout << "Please enter your name: ";
    cin >> name;

    // Create the player object and return it from the function
    Player player(username, name);

    return player;
}