#include "Point.h"
#include "3DPoint.h"

Point::Point() {
	x = 0;
	y = 0;
}

Point::Point(int x, int y) {
	Set(x, y);
}

Point::Point(Point const& src) {
	x = src.x;
	y = src.y;
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

void Point::Set(int x, int y) {
	this->x = x;
	this->y = y;
}

void Point::AddX(Point& src) {
	x = x + src.x;
}