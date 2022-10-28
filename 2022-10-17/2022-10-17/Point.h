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
	Point(Point const& src);
	int GetX();
	int GetY();
	void SetX(int x);
	void SetY(int y);
	void Set(int x, int y);
	void AddX(Point& src);
};