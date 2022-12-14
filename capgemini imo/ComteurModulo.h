#pragma once
#include "ACompteur.h"

class ComteurModulo : public ACompteur
{
	int �tat;
	int modulo;
public:
	ComteurModulo(int modulo)
	{
		this->modulo = modulo;
		�tat = 0;
	}
	void incrementer()
	{
		if (�tat < modulo-1)
		{
			�tat++;
		}
		else
		�tat = 0;
	}
	int getEtat()
	{
		return �tat;
	}
};

