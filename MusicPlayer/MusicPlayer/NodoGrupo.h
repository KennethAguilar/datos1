#pragma once
#include "Grupo.h"
class NodoGrupo
{
private:
	Grupo *grup;
	NodoGrupo *Sgte;


public:
	NodoGrupo(void);
	~NodoGrupo(void);

	NodoGrupo(Grupo *);

	Grupo *getGrupo();
	void setGrupo(Grupo *);

	NodoGrupo *getSgte();
	void setSgte(NodoGrupo *);
};

