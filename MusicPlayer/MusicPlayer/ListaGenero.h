#pragma once
#include "NodoGenero.h"
class ListaGenero
{
private:
	NodoGenero *cab;
	
	NodoGenero *DirNodo(char *);
	NodoGenero *DirAnterior(char *);
	NodoGenero *DirUltimo();
	void AgregarNodoDespues(NodoGenero *, NodoGenero *);

public:
	ListaGenero(void);
	~ListaGenero(void);

	NodoGenero *getCab();
	void setCab(NodoGenero *);

	bool vacia();

};

