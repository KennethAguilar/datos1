#pragma once
#include "Interprete.h"
#include "ListaCancionXinterprete.h"
class NodoInterprete
{
private:
	Interprete *interp;
	NodoInterprete *Sgte;
	ListaCancionXinterprete *SLCanciones;


public:
	NodoInterprete(void);
	~NodoInterprete(void);

	NodoInterprete(Interprete *);

	Interprete *getInterprete();
	void setInterprete(Interprete *);

	NodoInterprete *getSgte();
	void setSgte(NodoInterprete *);

	ListaCancionXinterprete *getSLCanciones();
	void setSLCanciones(ListaCancionXinterprete *);

};

