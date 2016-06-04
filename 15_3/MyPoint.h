#pragma once

class MyPoint
{
protected:
	double x, y;
public:
	MyPoint();
	MyPoint(double x, double y);
	double getX() const;
	double getY() const;
	double getDistance(MyPoint p) const;
};
