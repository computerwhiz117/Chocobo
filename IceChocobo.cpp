#include "IceChocobo.h"


enum MAGICTYPE {NONE, FIRE, ICE, EARTH, WATER};

int IceChocobo::getMagicType() const {
	return ICE;
}

int IceChocobo::getMagicTypeStatic() const {
	return FIRE;
}
