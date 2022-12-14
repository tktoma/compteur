#pragma once
#include "Acompteur.h"
class Compteur4Bits : public ACompteur {
	// repr�sente l'�tat du compteur : 0 =< �tat < 24
	char etat = 0;
public:
	void incrementer() {
		if (etat == 0xF) etat = 0;
		else etat += 1;
	}
	// retourne l'�tat courant du compteur
	int getEtat() {
		return etat;
	}
};