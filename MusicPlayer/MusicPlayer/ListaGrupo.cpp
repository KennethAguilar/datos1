#include "ListaGrupo.h"


ListaGrupo::ListaGrupo(void)
{
}


ListaGrupo::~ListaGrupo(void)
{
}

NodoGrupo *ListaGrupo::getCab(){
	return this->cab;
}
void ListaGrupo::setCab(NodoGrupo * _cab){
	this->cab = _cab;
}

bool ListaGrupo::vacia(){

	if (getCab() == NULL)
		return true;
	else
		return false;
}


NodoGrupo *ListaGrupo::DirNodo(char *){}
NodoGrupo *ListaGrupo::DirAnterior(char *){}
NodoGrupo *ListaGrupo::DirUltimo(){}
void ListaGrupo::AgregarNodoDespues(NodoGrupo *, NodoGrupo *){}