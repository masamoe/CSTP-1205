#pragma once
#include <stdlib.h>
#include <iostream>
using namespace std;

class Address {
public:
	string Street;
	string City;
	string Country;
	string PostalCode;

	Address* Next;
};