#include "ThreeDPoint.h"
#include <cmath>

ThreeDPoint::ThreeDPoint()
{
	this->x = 0.0;
	this->y = 0.0;
	this->z = 0.0;
}

ThreeDPoint::ThreeDPoint(double x, double y, double z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

double ThreeDPoint::getZ() const
{
	return this->z;
}

double ThreeDPoint::getDistance(const ThreeDPoint& p) const
{
	double dx = this->x - p.getX();
	double dy = this->y - p.getY();
	double dz = this->z - p.getZ();
	return std::sqrt(dx*dx + dy*dy + dz*dz);
}