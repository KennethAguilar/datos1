#pragma once
#include "stdafx.h"
class tema
{
private:

	char nombreTema[30];
	char nombreDisco[30];
	int anno;
	char empresaDisquera[30];
	char grupo[30];
	char genero[30];

public:
	tema(void);
	~tema(void);

	char *getNombreTema();
	void setNombreTema(char *);
	
	tema(char *, char *, int, char *, char *, char *);

	char *getNombreDisco();
	void setNombreDisco(char *);

	int getAnno();
	void setAnno(int);

	char *getEmpresaDisquera();
	void setEmpresaDisquera(char *);

	char *getGrupo();
	void setGrupo(char *);

	char *getGenero();
	void setGenero(char *);


};

