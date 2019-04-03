#include "EarthChocobo.h"

enum MAGICTYPE {NONE, FIRE, ICE, EARTH, WATER};

int EarthChocobo::getMagicType() const {
	return EARTH;
}

int EarthChocobo::getMagicTypeStatic() const {
	return EARTH;
}