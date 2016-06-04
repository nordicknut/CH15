#include "MyPoint.h"
#include <cmath>

MyPoint::MyPoint()
{
	this->x = 0.0;
	this->y = 0.0;
}

MyPoint::MyPoint(double x, double y)
{
	this->x = x;
	this->y = y;
}

double MyPoint::getX() const
{
	return x;
}

double MyPoint::getY() const
{
	return y;
}

double MyPoint::getDistance(MyPoint p) const
{
	double dx = this->x - p.getX();
	double dy = this->y - p.getY();
	return std::sqrt(dx*dx + dy*dy);
}