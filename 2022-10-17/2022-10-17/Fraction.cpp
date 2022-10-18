#include "Fraction.h"

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

int Fraction::GreatestCommonFactor() {
	return 0;
}

int Fraction::LowestCommonDenominator() {
	return 0;
}