#pragma once
#include "tema.h"
class NodoTema
{
private:
	tema *tem;
	NodoTema *sgte;
	NodoTema *ante;

public:
	NodoTema(void);
	~NodoTema(void);

	NodoTema(tema *);

	tema *getTema();
	void setTema(tema *);

	NodoTema *getSgte();
	void setSgte(NodoTema *);

	NodoTema *getAnte();
	void setAnte(NodoTema *);

};

