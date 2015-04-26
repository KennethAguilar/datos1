#pragma once
#include "NodoPersonalizada.h"
class ListaPersonalizada
{
private:
	NodoPersonalizada *cab;

	NodoPersonalizada *DirNodo(char *);
	NodoPersonalizada *DirUltimo();
	void agregarNodoDespues(NodoPersonalizada *, NodoPersonalizada *);

public:
	ListaPersonalizada(void);
	~ListaPersonalizada(void);

	NodoPersonalizada *getCab();
	void setCab(NodoPersonalizada *);

	bool vacia();

};

