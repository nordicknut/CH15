#include "Triangle.h"

Triangle::Triangle()
{
	side1 = 1.0;
	side2 = 1.0;
	side3 = 1.0;
}

Triangle::Triangle(double side1, double side2, double side3)
{
	this->side1 = side1;
	this->side2 = side2;
	this->side3 = side3;
}

double Triangle::getSide1() const
{
	return side1;
}

double Triangle::getSide2() const
{
	return side2;
}

double Triangle::getSide3() const
{
	return side3;
}

double Triangle::getArea() const
{
	//Area=SQRT(s(s-a)(s-b)(s-c)),
	//where s=(a+b+c)/2 or perimeter/2
	double s = this->getPerimeter() / 2.0;
	return sqrt(s*(s-side1)*(s-side2)*(s-side3));
}

double Triangle::getPerimeter() const
{
	return side1 + side2 + side3;
}

string Triangle::toString() const
{
	return "Triangle Object";
}

bool isValidSides(double side1, double side2, double side3)
{
	return (side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1);
}
