#include "Point.h"

Point::Point() {
}

Point::Point(int x, int y) {
	SetX(x);
	SetY(y);
}

int Point::GetX() {
	return x;
}

int Point::GetY() {
	return y;
}

void Point::SetX(int x) {
	if (x < -100) {
		this->x = -100;
	}
	else if (x > 100) {
		this->x = 100;
	}
	else { this->x = x; }
}

void Point::SetY(int y) {
	if (y < -100) {
		this->y = -100;
	}
	else if (y > 100) {
		this->y = 100;
	}
	else { this->y = y; }
}