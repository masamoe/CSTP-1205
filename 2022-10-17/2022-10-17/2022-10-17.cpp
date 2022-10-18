#include <stdlib.h>
#include <iostream>
#include "Point.h"

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
	
}