#pragma once
class ACompteur
{
public:
	// saute à l'état suivant
	virtual void incrementer() = 0;
	//retourne la valeur de l'état
	virtual int getEtat() = 0;
};

