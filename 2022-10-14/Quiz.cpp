#include <fstream>
#include <stdlib.h>
#include <iostream>
#include <string>
using namespace std;

void Quiz() {
	int numLines;
	string filename;
	int currentLine = 1;
	
	cout << "What would you like to name your file?\n";
	getline(cin, filename);
	cout << "How many lines would you like to enter?\n";
	cin >> numLines;

	ofstream fout(filename);
	string line_in;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	while (numLines > 0) {
		
		cout << "Enter line number " << currentLine << ":\n";
		getline(cin, line_in);
		line_in = line_in + "\n";
		fout << line_in;

		numLines--;
		currentLine++;
	}

	fout.close();
	ifstream file_in(filename);

	if (!file_in) {
		cout << filename << " could not be read.\n";
		return;
	}

	cout << "Here is what you entered:\n";

	string line;

	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	while (!file_in.eof()) {
		getline(file_in, line);
		cout << line << endl;
	}
}