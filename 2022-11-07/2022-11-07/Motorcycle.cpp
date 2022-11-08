#include "Motorcycle.h"
#include <iostream>

Motorcycle::Motorcycle()
{
	m_numberOfWheels = 2;

	cout << "Motorcycle constructor\n";
}

Motorcycle::~Motorcycle()
{
	cout << "Motorcycle destructor\n";
}