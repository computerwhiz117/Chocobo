#include "WaterChocobo.h"

enum MAGICTYPE {NONE, FIRE, ICE, EARTH, WATER};

int WaterChocobo::getMagicType() const {
	return WATER;
}

int WaterChocobo::getMagicTypeStatic() const{
	return WATER;
}