#include <stdlib.h>
#include <iostream>
#include <ctime>
using namespace std;

void GuessingGame() {
	unsigned int number = rand() % 10;
	unsigned int guess;
	char playAgain;
	cout << "Guess a number between 0 and 9.\n";
	cin >> guess;
	cout << "You guessed: " << guess << ".\n";
	cout << "The answer was: " << number << ".\n";

	if (number == guess) {
		cout << "YOU WIN!\n";
	}
	else {
		cout << "You Lose.\n";
	}

	cout << "Would you like to play again? Y/N\n";
	cin >> playAgain;

	if (playAgain == 'Y') {
		GuessingGame();
	}
	else {
		cout << "Goodbye!";
	}
}