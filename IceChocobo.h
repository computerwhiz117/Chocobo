#ifndef ICECHOCOBO_H
#define ICECHOCOBO_H
#include "Chocobo.h"

class IceChocobo : public Chocobo
{
public:
	IceChocobo() :Chocobo() {};

	virtual int getMagicType() const override;
	int getMagicTypeStatic() const;
};

#endif // !ICECHOCOBO_H
