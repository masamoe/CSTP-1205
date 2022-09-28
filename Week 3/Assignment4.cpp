#include <stdlib.h>
#include <iostream>
using namespace std;

void Assigment4a() {
	char inputStr[150];
	char lowerUpper[10];

	cout << "Please type a string less than 150 characters long: \n";
	cin.getline(inputStr, 150);
	cout << "Would you like it to be Lower or Upper case?\n";
	cin.getline(lowerUpper, 10);

	if (lowerUpper == "Lower" || lowerUpper == "lower") {
		for (int i = 0; i < strlen(inputStr); i++) {
			if (isupper(inputStr[i])) {
				inputStr[i] = inputStr[i] + 32;
			}
		}
	};
	else {
		for (int i = 0; i < strlen(inputStr); i++) {
			if (islower(inputStr[i])) {
				inputStr[i] = inputStr[i] - 32;
			}
		}
	};

	cout << inputStr;
}

void Assigment4b() {
	char inputStr[150];
	char lowerUpper[10];

	cout << "Please type a string less than 150 characters long: \n";
	cin.getline(inputStr, 150);
	cout << "Would you like it to be Lower or Upper case?\n";
	cin.getline(lowerUpper, 10);

	int n = strlen(inputStr);

	if (lowerUpper == "Lower" || lowerUpper == "lower") {
		while (n-- > 0)
		{
			char* strPtr = &inputStr[n];
			if (isupper(*strPtr)) {
				*strPtr = *strPtr + 32;
			}
		}
	}
	else {
		while (n-- > 0) 
		{
			char* strPtr = &inputStr[n];
			if (islower(*strPtr)) {
				*strPtr = *strPtr - 32;
			}
		}
	};

	cout << inputStr;
}