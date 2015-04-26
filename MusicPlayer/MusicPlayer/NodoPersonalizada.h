#pragma once
#include "Personalizada.h"
#include "ListaCancionXperso.h"
class NodoPersonalizada
{
private:
	Personalizada *perso;
	NodoPersonalizada *Sgte;
	NodoPersonalizada *Ante;
	ListaCancionXperso *DLCanciones;

public:
	NodoPersonalizada(void);
	~NodoPersonalizada(void);

	NodoPersonalizada(Personalizada *);

	Personalizada *getPerso();
	void setPersonalizada(Personalizada *);

	NodoPersonalizada *getSgte();
	void setSgte(NodoPersonalizada *);

	NodoPersonalizada *getAnte();
	void setAnte(NodoPersonalizada *);

	ListaCancionXperso *getDLCanciones();
	void setDLCanciones(ListaCancionXperso *);
};

