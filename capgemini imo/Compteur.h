#pragma once
#include "Acompteur.h"
class Compteur : public ACompteur
{
	int état = 0;
public:
	void incrementer() {
		état += 1;
	}
	// retourne l'état courant du compteur
	int getEtat() {
		return état;
	}
	void SetEtat(int etat)
	{
		this->état = etat;
	}
};