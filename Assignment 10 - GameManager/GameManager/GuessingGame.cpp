#include <stdlib.h>
#include <iostream>
#include <ctime>
#include "GuessingGame.h"
using namespace std;

void GuessingGame::StartGame()
{
	unsigned int number = rand() % 10;
	unsigned int guess;

	cout << "Guess a number between 0 and 9.\n";
	cin >> guess;
	cout << "You guessed: " << guess << ".\n";
	cout << "The answer was: " << number << ".\n";

	if (number == guess)
	{
		cout << "YOU WIN!\n";
	}
	else
	{
		cout << "You Lose.\n";
	}
}