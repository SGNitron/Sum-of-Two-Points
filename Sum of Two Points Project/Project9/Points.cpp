#include"Points.h"

Points::Points():numOfPoints(0)
{

}

void Points::addPoint(const Point aPoint)
{
		pointArray[numOfPoints] = aPoint;
		numOfPoints++;
}

void Points::placeArrayCursorAt(Points coordinate, int k) 
{
	Point usePoint;
	usePoint = pointArray[k];
	COORD coord;
	coord.X = usePoint.getXPoint()*1.95;
	coord.Y = 20 - usePoint.getYPoint();
	SetConsoleCursorPosition(
		GetStdHandle(STD_OUTPUT_HANDLE),
		coord);
}

void Points::arrayPointDisplay(Points inP3, int inNum ) const
{
	Point usePointDisplay;
	usePointDisplay = inP3.pointArray[inNum];
	usePointDisplay.display();

}

void Points::sumOfTwoPoints(Point inP1, int inIncGamePlay)
{
	Point pointSum;
	pointSum = pointArray[inIncGamePlay];

	int sumOfX, sumOfY;
	sumOfX = inP1.getXPoint() + pointSum.getXPoint();
	sumOfY = inP1.getYPoint() + pointSum.getYPoint();

	pointSum.setXPoint(sumOfX);
	pointSum.setYPoint(sumOfY);
	pointSum.placeCursorAt(pointSum);
	cout << "C\n";

}