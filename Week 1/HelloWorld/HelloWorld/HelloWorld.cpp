// HelloWorld.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	char firstCh;
	int firstInt;
	char secondCh;
	int secondInt;
	char thirdCh;
	int thirdInt;
	char fourthCh;
	int fourthInt;
	char fifthCh;
	int fifthInt;

	std::cout << "Please type a character and an integer:\n";
	std::cin >> firstCh >> firstInt;
	std::cout << "Please type a second character and an integer:\n";
	std::cin >> secondCh >> secondInt;
	std::cout << "Please type a third character and an integer:\n";
	std::cin >> thirdCh >> thirdInt;
	std::cout << "Please type a fourth character and an integer:\n";
	std::cin >> fourthCh >> fourthInt;
	std::cout << "Please type a fifth character and an integer:\n";
	std::cin >> fifthCh >> fifthInt;

	int sum = firstInt + secondInt + thirdInt + fourthInt + fifthInt;
	double avg = sum / 5;

	std::cout << "You entered the following:\n";
	std::cout << firstCh << " " << firstInt << "\n";
	std::cout << secondCh << " " << secondInt << "\n";
	std::cout << thirdCh << " " << thirdInt << "\n";
	std::cout << fourthCh << " " << fourthInt << "\n";
	std::cout << fifthCh << " " << fifthInt << "\n";
	std::cout << "The integer total is: " << sum << "\n";
	std::cout << "The integer average is: " << avg;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
