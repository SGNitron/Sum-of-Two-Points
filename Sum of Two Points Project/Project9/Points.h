#pragma once
#include <iostream>
#include "Point.h"
#include<cstring>
using namespace std;

class Points
{
public:
	Points();
	void addPoint(const Point);
	void placeArrayCursorAt(Points, int);
	void arrayPointDisplay(Points, int) const;
	void sumOfTwoPoints(Point, int);

private:
	static const int MAXPOINT = 10;
	Point pointArray[MAXPOINT];
	int numOfPoints;
	int nX;
	int nY;
};

