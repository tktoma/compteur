#pragma once
#include "ACompteur.h"

class ComteurModulo : public ACompteur
{
	int état;
	int modulo;
public:
	ComteurModulo(int modulo)
	{
		this->modulo = modulo;
		état = 0;
	}
	void incrementer()
	{
		if (état < modulo-1)
		{
			état++;
		}
		else
		état = 0;
	}
	int getEtat()
	{
		return état;
	}
};

