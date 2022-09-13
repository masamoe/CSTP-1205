#include <stdlib.h>
#include <iostream>
using namespace std;

bool IsEven(int num)
{
	int remainder = num % 2;

	if (remainder == 0)
	{
		return true;
	}

	return false;
}

void BasicConditionals()
{
	int num1 = 23;
	int num2 = 36;

	bool num1even = IsEven(num1);
	bool num2even = IsEven(num2);

	cout << "Is Num1 even? " << num1even << "Is Num2 even? " << num2even << endl;
}


