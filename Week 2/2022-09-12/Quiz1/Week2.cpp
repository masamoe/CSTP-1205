using namespace std;
#include <iostream>
#include <stdlib.h>
#include "Quiz1.h"
#include "Quiz2.h"
#include "Quiz3.h"
#include "Assignment2.h"
#include "Assignment3.h"

int main()
{
//	Lab2for();
//	Lab2while();
//	Quiz1();
//	Quiz1_Doubles();
//	Quiz2();

	int x = 10;
	int y = 20;
	swap(&x, &y);

	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	Print(arr, 10);
//	initializeArray(arr, 10);

	cout << CalculateAverage(arr, 10)<<endl;

	bool boolArr[] = { true, false, true, false, false };
	bool myBool = true;
	Quiz3(boolArr, sizeof(boolArr));
	Quiz4(boolArr, sizeof(boolArr), myBool);
	Quiz3(boolArr, sizeof(boolArr));
}

