#include "header.h"

Parcours::Parcours() : size(1)
{
	this->index = 0;
	this->tab = new Point * [size];
	this->distanceSum = 0;
}

Parcours::Parcours(int tSize): size(tSize)
{
	this->index = 0;
	this->tab = new Point * [size];
	this->distanceSum = 0;
}

Parcours::~Parcours()
{
	delete* tab;
}

void Parcours::add(Point* tObj) {
	this->add(tObj, this->index);
	this->index++;
};

void Parcours::add(Point* tObj, int tIndex) {
	tab[tIndex] = tObj;
};

double Parcours::distanceTo(Point* a, Point* b)
{
	double deltaX = a->getX() - b->getX();
	double deltaY = a->getY() - b->getY();
	double deltaZ = a->getZ() - b->getZ();
	return std::sqrt(std::pow(deltaX, 2) + std::pow(deltaY, 2) + std::pow(deltaZ, 2));
}

double Parcours::calculDistance()
{
	for (int i = 0; i < (this->size) - 1; i++)
	{
		distanceSum += distanceTo(tab[i], tab[i + 1]);
	}
	return distanceSum;
}