#pragma once
#include "NodoGrupo.h"
class ListaGrupo
{
private:
	NodoGrupo *cab;
	NodoGrupo *DirNodo(char *);
	NodoGrupo *DirAnterior(char *);
	NodoGrupo *DirUltimo();
	void AgregarNodoDespues(NodoGrupo *, NodoGrupo *);

public:
	ListaGrupo(void);
	~ListaGrupo(void);

	NodoGrupo *getCab();
	void setCab(NodoGrupo *);

	bool vacia();

	void InsertarFinal(Grupo*);
	void desplegarLISTA();

};

