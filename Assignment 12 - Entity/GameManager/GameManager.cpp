#include <iostream>
#include "GameManager.h"
#include "GuessingGame.h"

using namespace std;

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
