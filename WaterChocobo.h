#ifndef WATERCHOCOBO_H
#define WATERCHOCOBO_H
#include "Chocobo.h"

class WaterChocobo : public Chocobo
{
public:
	WaterChocobo() :Chocobo() {};

	virtual int getMagicType() const override;
	int getMagicTypeStatic() const;
};
#endif