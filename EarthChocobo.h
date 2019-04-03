#ifndef EARTCHOCOBO_H
#define EARTHCHOCOBO_H
#include "Chocobo.h"

class EarthChocobo : public Chocobo
{
public:
	EarthChocobo() :Chocobo() {};

	virtual int getMagicType() const override;
	int getMagicTypeStatic() const;
};
#endif