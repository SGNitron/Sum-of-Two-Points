#pragma once
#include <iostream>
#include<cmath>
#include "windows.h"
#include<conio.h>
using namespace std;

class Point {
public:
	Point(); // Parameterized Constructor
	Point(int, int);  // Default Constructor 
	Point(int);

	void setXPoint(int); //Function that sets value for mX
	void setYPoint(int); //Function sets value for mY
	int getXPoint();//Function retrieves mX value
	int getYPoint();//Function retrieves mY values
	void display()const; //Function to print out coordinates 
	double distance(const Point&) const; //Function to calculate distance between two point
	void placeCursorAt(Point);
	void setCursorAt(int, int);
	int genRandNum();

private:
	//X and Y Integers to represent x and y coordinates 
	int mX;
	int mY;
};

