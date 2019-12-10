#include "Point.h"
#include "Points.h"

int main() {

	int xCor = 0;

	Point p1(xCor);
	Point p2;
	Points p3;
	Point makeArray[10];

	for (int i = 0; i < 10; i++)
	{
		makeArray[i] = p2.genRandNum();
		p3.addPoint(makeArray[i]);
	}

	bool letsPlay;
	char a;

	cout << "Do you want to add and display some points?(Y/N)" << endl;
	cin >> a;

	if ((a = 'n') || (a = 'N'))
	{
		letsPlay = false;
	}
	else if ((a = 'y') || (a = 'y'))
	{
		letsPlay = true;
	}

	if (letsPlay = true)
	{
		cout << "Let's enter a set of x coordinate!" << endl;
		cout << "X: ";
		cin >> xCor;
		p1.setXPoint(xCor);
	}

	if (letsPlay = false)
	{
		cout << "Have a good day!" << endl;
		return 0;
	}

	int incGamePlay = 0;

	p2.setCursorAt(1, 4);
	cout << "What is the sum of ";
	p1.display();
	cout << " and ";
	p3.arrayPointDisplay(p3, incGamePlay);

	cout << endl;
	cout << "'A' will represent the first coordinate, 'B' will represent the second coordinate." << endl;
	cout << "'?' Will represent your input while 'C' represents the actual coordinate." << endl;
	cout << "Now enter your answer: ";

	int userEnterX, userEnterY;
	Point p4;

	cout << endl;
	cin >> userEnterX;
	cin >> userEnterY;

	p2.setCursorAt(1, 5);
	p2.setCursorAt(1, 6);

	p1.placeCursorAt(p1);
	cout << "B\n";
	p3.placeArrayCursorAt(p3, incGamePlay);
	cout << "A\n";
	p4.setXPoint(userEnterX);
	p4.setYPoint(userEnterY);
	p4.placeCursorAt(p4);
	cout << "?\n";
	p3.sumOfTwoPoints(p1, incGamePlay);
	p2.setCursorAt(1, 5);



	system("PAUSE");
	return 0;

}
