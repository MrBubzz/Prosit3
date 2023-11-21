#pragma once
#include "header.h"

class Parcours2D: public Parcours
{
private:
	Point2D** tab;
public:
	Parcours2D(int tSize);
	virtual void afficherInfos();
};