#pragma once
#include "header.h"

class Parcours
{
protected:
	Point** tab;
	int size;
	int index;
	double distanceSum;
public:
	Parcours();
	Parcours(int tSize);
	virtual ~Parcours(); // Destructeur de classe
	virtual void add(Point* tObj);
	virtual void add(Point* tObj, int tIndex);
	virtual void afficherInfos() = 0;
	double distanceTo(Point* a, Point* b);
	virtual double calculDistance();
};
