#pragma once
#include "stdafx.h"
class Interprete
{
private:
	char lugarNacimiento[30];
	int annoNacimiento;
	int edad;
	char nombre[30];

public:
	Interprete(void);
	~Interprete(void);

	Interprete(char *, int, int, char *);

	char *getLugarNacimiento();
	void setLugarNacimiento(char *);

	int getAnnoNacimiento();
	void setAnnoNacimiento(int);

	int getEdad();
	void setEdad(int);

	char *getNombre();
	void setNombre(char *);
};

