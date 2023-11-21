#include "header.h"

Parcours3D::Parcours3D(int tSize)
{
	this->size = tSize;
	this->index = 0;
	this->tab = new Point3D * [size];
	this->distanceSum = 0;
}

void Parcours3D::afficherInfos() 
{
	for (int i = 0; i < this->size; i++) {
		cout << "objet numero " << i + 1 << " ( x: " << tab[i]->getX() << " , y: " << tab[i]->getY() << " , z: " << tab[i]->getZ() << " )" << endl;
	};
}