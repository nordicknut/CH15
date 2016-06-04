#pragma once
#include "GeometricObject.h"

class Triangle : public GeometricObject
{
private:
	double side1, side2, side3;

public:
	Triangle();
	Triangle(double side1, double side2, double side3);
	double getSide1() const;
	double getSide2() const;
	double getSide3() const;
	double getArea() const;
	double getPerimeter() const;
};