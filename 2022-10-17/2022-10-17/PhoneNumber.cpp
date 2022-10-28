#include <stdlib.h>
#include <iostream>
#include "PhoneNumber.h"

using namespace std;

PhoneNumber::PhoneNumber(int areaCode, int number) {
	if (areaCode <= 0 || areaCode > 999) {
		cout << "Incorrect Number";
	};
	AreaCode = areaCode;
	Number = number;
	CountryCode = 0;
	Internal = 0;
}