#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "add.h"

inline int Max(int a, int b) {
	return a > b ? a : b;
}
inline int Min(int a, int b) {
	return a < b ? a : b;
}

class Point {
	int x;
	int y;

public:
	const int &X;
	const int &Y;
	Point(int x, int y) :
			x(x), y(y), X(Point::x), Y(Point::y) {
	}
	Point() :
			x(0), y(0), X(x), Y(y) {
	}
	int getX() const {
		return x;
	}
	int getY() const {
		return y;
	}
};

class Rectangle {
	Point min;
	Point max;

public:
	static char name[10];
	const int type;
	Rectangle(Point p1, Point p2) :
			min(Min(p1.X, p2.X), Min(p1.Y, p2.Y)),
			max(Max(p1.X, p2.X), Max(p1.Y, p2.Y)),
			type(0) {}

	Rectangle(int wmax = 0, int hmax = 0, int hmin = 0, int wmin = 0) :
			type(10) {
		set(wmin, wmax, hmin, hmax);
	}

	int Area() const {
		return (this->max.X - this->min.X) *
			   (this->max.Y - this->min.Y);
	}

	void set(int wmin, int wmax, int hmin, int hmax);
};

char Rectangle::name[] = "Rectangle";

void Rectangle::set(int wmin, int wmax, int hmin, int hmax) {
	Point p1(Min(wmin, wmax), Min(hmin, hmax));
	Point p2(Max(wmin, wmax), Max(hmin, hmax));
	this->min = p1;
	this->max = p2;
}

int main() {
	const Rectangle r = { {5,5}, {10,10} };
	/*const Point p1(10, 10);
	const Point p2(5, 5);
	//Rectangle r(20, 20);
	const Rectangle r2(p1, p2);*/
	printf("%d",r.Area());
	printf("%d",add(1,2));
	std::cout << "The sum of 3 and 4 is " << add(3, 4) << std::endl;
	return 0;
}
