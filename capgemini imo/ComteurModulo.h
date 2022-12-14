#pragma once
#include "ACompteur.h"
#include <iostream>
class ComteurModulo : public ACompteur
{
	int etat;
	int modulo;
public:
	ComteurModulo(int modulo)
	{
		this->modulo = modulo;
		etat = 0;
	}
	void incrementer()
	{
		if (etat != modulo)
		{
			etat++;
		}
		else
		etat = 0;
	}
	int getEtat()
	{
		return etat;
	}
};

