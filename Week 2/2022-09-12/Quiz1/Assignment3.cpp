#include <stdlib.h>
#include <iostream>
using namespace std;

void switchC() {
	char c = 's';

	switch (c) {
	case 'a':
		break;
	case 'b':
		break;
	case 'c':
		break;
	case 'd':
		break;
	case 'e':
		break;
	default:
		cout << "error\n";

	};
};

void BasicPointers() {
	int* ip;
	char* cp;

	int x = 123;
	ip = &x; // & = address of, gets the address of x and puts it in ip pointer

	char c = 'a';
	cp = &c;

	char* cp2 = nullptr; //initializes a pointer that doesn't point to any object
	
	//this is called de-referencing a pointer
	char d = *cp; //sets the char value at the address pointeris pointing to, to var d

	*cp = 'x'; //changing the value of the pointed to char

};

void swap(int* px, int* py) //this swaps the values of the inputs
{
	int temp;
	temp = *px;
	*px = *py;
	*py = temp;
}

void arrayAcessPointer()
{
	int arr[] = { 10, 20, 30, 40, 40 };

	int* pi;
	pi = &arr[0];

	cout << "value at pi+1 = " << *(pi + 1) << endl;

}

//function to initialize an array of size n using pointers
void initializeArray(int* p, int n)
{
	while (n-- > 0)
	{
		*p = 0;	//assign 0 to the element pointed to
		++p;	//point to the next element
	}
}

void Print(int* pi, int n)
{
	while (n-- > 0)
	{
		cout << "Value at pi = " << *pi << endl;
		++pi;
	}
}

int CalculateAverage(int* pi, int n)
{
	int total = 0;
	for (int i = n; i > 0; i--)
	{
		total = total + *pi;
		++pi;
	}
	double average = total / n;
	return average;
}