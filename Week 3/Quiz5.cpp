#include <stdlib.h>
#include <iostream>
using namespace std;

void Quiz5() {
	char name[50];
	char address[100];
	char email[50];
	char occupation[30];
	char dash[4] = " - ";
	char output[250];

	cout << "Please enter your name: \n";
	cin.getline(name, 50);
	cout << "Please enter your address: \n";
	cin.getline(address, 100);
	cout << "Please enter your email: \n";
	cin.getline(email, 50);
	cout << "Please enter your occupation: \n";
	cin.getline(occupation, 30);

	strncpy(output, name, 250);
	strncat(output, dash, 4);
	strncat(output, address, 100);
	strncat(output, dash, 4);
	strncat(output, email, 50);
	strncat(output, dash, 4);
	strncat(output, occupation, 30);

	cout << output;
}
