#pragma once
#include "NodoInterprete.h"
class ListaInterprete
{
private:
	NodoInterprete *cab;
	NodoInterprete *DirNodo(char *);
	NodoInterprete *DirAnterior(char *);
	NodoInterprete *DirUltimo();
	void agregarNodoDespues(NodoInterprete *, NodoInterprete *);

public:
	ListaInterprete(void);
	~ListaInterprete(void);

	NodoInterprete *getCab();
	void setCab(NodoInterprete *);

	bool vacia();

	void InsertarFinal(Interprete*);
	void desplegarLISTA();

};

