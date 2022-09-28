#include <stdlib.h>
#include <iostream>
using namespace std;

void Assigment4a() {
	char inputStr[150];
	char lowerUpper;

	cout << "Please type a string less than 150 characters long: \n";
	cin.getline(inputStr, 150);
	cout << "Type L for lowercase or U for uppercase:\n";
	cin >> lowerUpper;

	if (lowerUpper == 'L')
	{
		for (int i = 0; i < strlen(inputStr); i++) 
		{
			if (isupper(inputStr[i])) {
				inputStr[i] = inputStr[i] + 32;
			}
		}
	}
	else {
		for (int i = 0; i < strlen(inputStr); i++) 
		{
			if (islower(inputStr[i])) {
				inputStr[i] = inputStr[i] - 32;
			}
		}
	};

	cout << inputStr << endl;
}

void Assigment4b() {
	char inputStr[150];
	char lowerUpper;

	cout << "Please type a string less than 150 characters long: \n";
	cin.getline(inputStr, 150);
	cout << "Type L for lowercase or U for uppercase:\n";
	cin >> lowerUpper;

	int n = strlen(inputStr);

	if (lowerUpper == 'L') 
	{
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