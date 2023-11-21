#pragma once
#include "header.h"

class Parcours3D: public Parcours
{
private:
	Point3D** tab;
public:
	Parcours3D(int tSize);
	virtual void afficherInfos();
};

