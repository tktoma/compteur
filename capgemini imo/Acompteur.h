#pragma once
class ACompteur
{
public:
	// saute � l'�tat suivant
	virtual void incrementer() = 0;
	//retourne la valeur de l'�tat
	virtual int getEtat() = 0;
};

