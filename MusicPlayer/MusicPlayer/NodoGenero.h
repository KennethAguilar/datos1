#pragma once
#include "Genero.h"
class NodoGenero
{
private:
	Genero * gener;
	NodoGenero *Sgte;

public:
	NodoGenero(void);
	~NodoGenero(void);

	NodoGenero(Genero *);

	Genero *getGener();
	void setGener(Genero *);

	NodoGenero *getSget();
	void setSgte(NodoGenero *);

};

