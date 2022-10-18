#pragma once
class Point {
	//Data Members
private:
	int x;
	int y;

	//Function Members
public:
	Point();
	Point(int x, int y);
	int GetX();
	int GetY();
	void SetX(int x);
	void SetY(int y);
};