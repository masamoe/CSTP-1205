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

	cout << "Is Num1 even? " << num1even << "\nIs Num2 even? " << num2even << endl;
}

void Lab2for()
{
	int myarr[100] = { 1 };

	for (int i = 1; i < 100; i++)
	{
		myarr[i] = i * 10;
		cout << myarr[i] << "\n";
	}

}

void Lab2while()
{
	int myarr[100] = { 1 };
	int i = 1;

	while (i < 100)
	{
		myarr[i] = i * 10;
		cout << myarr[i] << "\n";
		i++;
	}

}
