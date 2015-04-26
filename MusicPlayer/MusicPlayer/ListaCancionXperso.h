#pragma once
#include "NodoCancionXperso.h"
class ListaCancionXperso
{
private:
	NodoCancionXperso *cab;

public:
	ListaCancionXperso(void);
	~ListaCancionXperso(void);

	NodoCancionXperso *getCab();
	void setCab(NodoCancionXperso *);
};

