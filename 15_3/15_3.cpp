// 15_3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "MyPoint.h"
#include "ThreeDPoint.h"

int main()
{
	MyPoint a(-2, 1);
	MyPoint b(1, 5);
	double test1 = a.getDistance(b);//s/b 5;

	ThreeDPoint c(9, 2, 7);
	ThreeDPoint d(4, 8, 10);
	double test2 = c.getDistance(d);//s/b ~8.37

    return 0;
}

