#pragma once
#include "NodoTema.h"
class NodoCancionXinterprete
{
private:
	int id; //Es el foreignkey
	NodoTema *Salto; //Salto a la lista de temas
	NodoCancionXinterprete *Sgte;

public:
	NodoCancionXinterprete(void);
	~NodoCancionXinterprete(void);

	NodoCancionXinterprete(int);

	int getID();
	void setID(int);

	NodoTema *getSalto();
	void setSalto(NodoTema *);

	NodoCancionXinterprete *getSgte();
	void setSgte(NodoCancionXinterprete *);
};

