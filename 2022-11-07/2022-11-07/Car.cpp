#include "Car.h"
#include <iostream>

Car::Car()
{
	m_numberOfWheels = 4;

	cout << "Car constructor\n";
}

Car::~Car()
{
	cout << "Car destructor\n";
}