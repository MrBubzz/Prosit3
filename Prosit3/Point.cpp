#include "header.h"

Point::Point(): posX(0), posY(0), posZ(0) {}

Point::Point(double tX, double tY) : posX(tX), posY(tY), posZ(0) {}

Point::Point(double tX, double tY, double tZ) : posX(tX), posY(tY), posZ(tZ) {}

double Point::getX()
{
	return this->posX;
}

double Point::getY()
{
	return this->posY;
}

double Point::getZ()
{
	return this->posZ;
}

void Point::setX(double tX)
{
	this->posX = tX;
}

void Point::setY(double tY)
{
	this->posY = tY;
}

void Point::setZ(double tZ)
{
	this->posZ = tZ;
}