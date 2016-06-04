// 15_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Triangle.h"
#include <iostream>

using namespace std;

int main()
{
	double s1, s2, s3;
	string color;
	bool filled;
	cout << "Enter three sides of a triangle:";
	cin >> s1 >> s2 >> s3;
	if (!isValidSides(s1, s2, s3))
	{
		cout << "Those are not valid sides for an actual triangle. Goodbye." << endl;
		return 1;
	}
	cout << "Enter color: ";
	cin >> color;
	cout << "Color filled: yes 1, no 0: ";
	cin >> filled;
	
	Triangle t(s1, s2, s3);
	t.setColor(color);
	t.setFilled(filled);
	
	cout << "Area: " << t.getArea() << endl;
	cout << "Perimeter: " << t.getPerimeter() << endl;
	cout << "Color: " << t.getColor() << endl;
	string fill = t.isFilled() ? "true" : "false";
	cout << "Filled: " << fill << endl;

    return 0;
}

