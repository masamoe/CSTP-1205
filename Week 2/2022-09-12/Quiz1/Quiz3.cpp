
#include <stdlib.h>
#include <iostream>
#include "Quiz3.h"
using namespace std;

void Quiz3(bool* arr, int n) {
	while (n-- > 0)
	{
		if (*arr) {
			cout << "True\n";
		}
		else {
			cout << "False\n";
		}
		++arr;
	};
}

void Quiz4(bool* arr, int n, bool trueFalse) {
	while (n-- > 0)
	{
		if (*arr != trueFalse) {
			*arr = trueFalse;
		}
		++arr;
	};
}

