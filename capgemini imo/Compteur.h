#pragma once
#include "Acompteur.h"
class Compteur : public ACompteur
{
	int �tat = 0;
public:
	void incrementer() {
		�tat += 1;
	}
	// retourne l'�tat courant du compteur
	int getEtat() {
		return �tat;
	}
	void SetEtat(int etat)
	{
		this->�tat = etat;
	}
};