#pragma once
#include "stdafx.h"
class Genero
{
private:
	char nombreGenero[30];
	char interprete[30];
	char grupo[30];

public:
	Genero(void);
	~Genero(void);

	Genero(char *, char *, char *);

	char *getNombreGenero();
	void setNombreGenero(char *);

	char *getInterprete();
	void setInterprete(char *);

	char *getGrupo();
	void setGrupo(char *);

};

