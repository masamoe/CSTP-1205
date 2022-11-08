#include "Vehicle.h"

Vehicle::Vehicle() : m_numberOfWheels(0)
{
	cout << "Vehicle constructor\n";
}

Vehicle::~Vehicle()
{
	cout << "Vehicle destructor\n";
}

unsigned int Vehicle::GetNumberOfWheels()
{
	return m_numberOfWheels;
}