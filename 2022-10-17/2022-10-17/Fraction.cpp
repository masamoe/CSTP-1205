#include "Fraction.h"

Fraction::Fraction() {
}

Fraction::Fraction(int n, int d) {
	Set(n, d);
}

int Fraction::GetNum() {
	return num;
}

int Fraction::GetDen() {
	return den;
}

void Fraction::Set(int n, int d) {
	this->num = n;
	this->den = d;

}

int Fraction::GreatestCommonFactor(int a, int b) {
	if (b == 0) {
		return a;
	}

	return GreatestCommonFactor(b, a % b);
}

int Fraction::LowestCommonDenominator(int a, int b) {
	int LCM;

	if (a > b) {
		LCM = a;
	}
	else {
		LCM = b;
	}
	while (1) {
		if (LCM % a == 0 && LCM % b == 0) {
			return LCM;
		}
		else { 
			LCM++;
		}
	}
}