#include <stdlib.h>
#include <iostream>
#include "Point.h"
#include "Fraction.h"

using namespace std;

int main() {
	Point pointArray[10];
	int prevX = 1;
	int prevY = 0;
	
	for (int i = 0; i < 10; i++) {
		pointArray[i].SetX(prevX);
		pointArray[i].SetY(prevY);
		cout << "x: " << pointArray[i].GetX() << " y: " << pointArray[i].GetY() << endl;
		prevX = prevX * 2;
		prevY++;
	}

	Fraction f1(201, 33);
	cout << f1.GreatestCommonFactor(201, 33) << endl;
	cout << f1.LowestCommonDenominator(201, 33) << endl;
	
}