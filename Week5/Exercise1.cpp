#include <stdlib.h>
#include <iostream>
#include <string>
using namespace std;

void exercise1() {
	string dogName;
	string dogBreed;
	string dogAge;

	cout << "Please type the name of your dog:\n";
	getline(cin, dogName);
	cout << "Please type the breed of your dog:\n";
	getline(cin, dogBreed);
	cout << "Please type the age of your dog:\n";
	getline(cin, dogAge);
	cout << "Your dog's name is " << dogName << ", it is a " << dogBreed << " and it is " << dogAge << " years old.\n";
}