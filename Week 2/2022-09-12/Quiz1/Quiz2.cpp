#include <stdlib.h>
#include <iostream>
using namespace std;

void Quiz2() {
	int myarr[10];
	int total = 0;

	cout << "Please, enter ten integers, separated by spaces:\n";
	cin >> myarr[0] >> myarr[1] >> myarr[2] >> myarr[3] >> myarr[4] >> myarr[5] >> myarr[6] >> myarr[7] >> myarr[8] >> myarr[9];
	for (int i = 0; i < 10; i++)
	{
		total = total + myarr[i];
		cout << myarr[i] << "\n";
	}
	int arrLength = 10;
	double arrAvg = total / arrLength;
	cout << "the total is: " << total << "\nthe average is: " << arrAvg << endl;
}