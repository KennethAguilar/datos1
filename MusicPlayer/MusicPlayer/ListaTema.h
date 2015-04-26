#pragma once
#include "NodoTema.h"
class ListaTema
{
private:
	NodoTema *cab;


	NodoTema *DirNodo(int);
	NodoTema *DirUltimo();
	void agregarNodoDespues(NodoTema *, NodoTema *);

public:
	ListaTema(void);
	~ListaTema(void);

	NodoTema *getCab();
	NodoTema setCab(NodoTema *);

	bool vacia();

};

