#include <stdlib.h>
#include <iostream>
#include <ctime>
#include "GuessingGame.h"
using namespace std;

void GuessingGame::StartGame()
{
	unsigned int number = rand() % 50;
	unsigned int guess;
	int tries = 0;
	while (tries < 20)
	{
		cout << "Guess a number between 0 and 49: ";
		cin >> guess;
		if (guess == number)
		{
			cout << "You guessed the number!" << endl;
			break;
		}
		else if (guess < number)
		{
			cout << "Your guess is too low." << endl;
		}
		else
		{
			cout << "Your guess is too high." << endl;
		}
		tries++;
	}
	if (tries == 20)
	{
		cout << "You ran out of tries. The number was " << number << endl;
	}
}

void GuessingGame::RunGame()
{
	Player player = GuessingGame::GetPlayerInformation();
	GuessingGame::WelcomePlayer(player.GetName());
	GameManagement::GivePlayerOptions();
	string playerInput;
	GameManagement::GetPlayerInput(playerInput);

	bool shouldRunGame = GameManagement::EvaluatePlayerInput(playerInput) != PlayerOptions::Quit;
	while (shouldRunGame)
	{
		StartGame();
		GameManagement::GivePlayerOptions();
		GameManagement::GetPlayerInput(playerInput);
		shouldRunGame = GameManagement::EvaluatePlayerInput(playerInput) != PlayerOptions::Quit;
	}
}

Player GuessingGame::GetPlayerInformation()
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

void GuessingGame::WelcomePlayer(const string &name)
{
	cout << "Welcome back " << name << " !" << endl;
}