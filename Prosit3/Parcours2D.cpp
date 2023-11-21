#include "header.h"

Parcours2D::Parcours2D(int tSize)
{
	this->size = tSize;
	this->index = 0;
	this->tab = new Point2D * [size];
	this->distanceSum = 0;
}

void Parcours2D::afficherInfos()
{
	for (int i = 0; i < this->size; i++) {
		cout << "objet numero " << i + 1 << " ( x: " << tab[i]->getX() << " , y: " << tab[i]->getY() << " )" << endl;
	};
};