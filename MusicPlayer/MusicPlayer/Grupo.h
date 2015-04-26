#pragma once
#include "stdafx.h"
class Grupo
{
private:
	char paisProcedencia[30];
	int fechaCreacion;
	char nombreGrupo[30];

public:
	Grupo(void);
	~Grupo(void);

	Grupo(char *, int, char *);

	char *getPaisProcedencia();
	void setPaisProcedencia(char *);

	int getFechaCreacion();
	void setFechaCreacion(int);

	char *getNombreGrupo();
	void setNombreGrupo(char *);

};

