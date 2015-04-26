#pragma once
#include "NodoTema.h"
class NodoCancionXperso
{
private:
	int id;
	NodoTema *Salto;
	NodoCancionXperso *Sgte;

public:
	NodoCancionXperso(void);
	~NodoCancionXperso(void);

	NodoCancionXperso(int);

	int getId();
	void setId(int);

	NodoTema *getSalto();
	void setSalto(NodoTema *);

	NodoCancionXperso *getSgte();
	void setSgte(NodoCancionXperso *);

};

