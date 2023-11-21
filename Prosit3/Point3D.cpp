#include "header.h"

Point3D::Point3D()
{
	this->posX = 0;
	this->posY = 0;
	this->posZ = 0;
}

Point3D::Point3D(double tX, double tY, double tZ)
{
	this->posX = tX;
	this->posY = tY;
	this->posZ = tZ;
}