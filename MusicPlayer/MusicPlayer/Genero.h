#pragma once
#include "stdafx.h"
class Genero
{
private:
	char nombreGenero[30];

public:
	Genero(void);
	~Genero(void);

	Genero(char *);

	char *getNombreGenero();
	void setNombreGenero(char *);

};

