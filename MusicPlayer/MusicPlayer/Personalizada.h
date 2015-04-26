#pragma once
#include "stdafx.h"
class Personalizada
{
private:
	char nombrePersonalizada[30];

public:
	Personalizada(void);
	~Personalizada(void);

	Personalizada(char *);

	char *getNombrePersonalizada();
	void setNombrePersonalizada(char *);

};

