#pragma once
#include "NodoCancionXinterprete.h"
class ListaCancionXinterprete
{
private:
	NodoCancionXinterprete *cab;
	

public:
	ListaCancionXinterprete(void);
	~ListaCancionXinterprete(void);

	NodoCancionXinterprete *getCab();
	void setCab(NodoCancionXinterprete *);
};

