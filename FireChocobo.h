#ifndef FIRE_CHOCOBO.H
#define FIRECHOCOBO_H
#include "Chocobo.h"

class FireChocobo : public Chocobo
{
public:
	FireChocobo() :Chocobo() {};

	virtual int getMagicType() const override;
	int getMagicTypeStatic() const;
};
#endif
