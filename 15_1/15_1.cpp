// 15_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Triangle.h"
#include <iostream>

using namespace std;

int main()
{
	double s1, s2, s3;
	cout << "Enter three sides of a triangle:";
	cin >> s1 >> s2 >> s3;
	if (!isValidSides(s1, s2, s3))
	{
		cout << "Those are not valid sides for an actual triangle. Goodbye." << endl;
		return 1;
	}

    return 0;
}

