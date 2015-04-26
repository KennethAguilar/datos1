#pragma once
#include "tema.h"
#include "stdafx.h"
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
	NodoTema setSgte();

	NodoTema *getAnte();
	NodoTema setAnte();

};

