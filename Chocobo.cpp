// Chocobo.cpp : Defines the entry point for the console application.
//

#include "Chocobo.h"

enum MAGICTYPE {NONE, FIRE, ICE, EARTH, WATER};


Chocobo::Chocobo()
{
}

int Chocobo::getMagicTypeStatic() const {
	return NONE;
}

int Chocobo::getMagicType() const {
	return NONE;
}