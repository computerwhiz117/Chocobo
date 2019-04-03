#include "FireChocobo.h"

enum MAGICTYPE {NONE, FIRE, ICE, EARTH, WATER};

int FireChocobo::GetMagicType() const {
	return FIRE;
}

int FireChocobo::getMagicTypeStatic() const {
	return FIRE;
}