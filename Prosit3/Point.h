#pragma once
#include "header.h"

class Point
{
protected:
	double posX;
	double posY;
	double posZ;
public:
	Point();
	Point(double tX, double tY);
	Point(double tX, double tY, double tZ);
	virtual double getX();
	virtual double getY();
	virtual double getZ();
	virtual void setX(double tX);
	virtual void setY(double tY);
	virtual void setZ(double tZ);
};

