#pragma once
#include "MyPoint.h"

class ThreeDPoint : public MyPoint
{
private:
	double z;
public:
	ThreeDPoint();
	ThreeDPoint(double x, double y, double z);
	double getZ() const;
	double getDistance(const ThreeDPoint&) const;
};
