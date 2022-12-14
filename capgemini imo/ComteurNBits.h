#pragma once
#include <iostream>
#include "Compteur.h"
class ComteurNBits : public Compteur
{
	char n;
public:
	ComteurNBits(char n)
	{
		this->n = n;
	}
	void incrementer()
	{
		for (size_t i = 0; i < n; i++)
		{
			std::cout << getEtat() << std::endl;
			Compteur::incrementer();
		}
	}
};

