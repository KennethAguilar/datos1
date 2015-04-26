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


NodoGrupo *ListaGrupo::DirNodo(char *){
	return NULL;
}
NodoGrupo *ListaGrupo::DirAnterior(char *){
	return NULL;
}
NodoGrupo *ListaGrupo::DirUltimo(){
	return NULL;
}
void ListaGrupo::AgregarNodoDespues(NodoGrupo *, NodoGrupo *){}