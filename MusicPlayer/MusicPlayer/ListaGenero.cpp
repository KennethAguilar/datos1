#include "ListaGenero.h"


ListaGenero::ListaGenero(void)
{
}


ListaGenero::~ListaGenero(void)
{
}

NodoGenero *ListaGenero::getCab(){
	return this->cab;
}
void ListaGenero::setCab(NodoGenero * _cab){
	this->cab = _cab;
}

bool ListaGenero::vacia(){

	if (getCab() == NULL)
		return true;
	else
		return false;
}

NodoGenero *ListaGenero::DirNodo(char *){
	return NULL;
}
NodoGenero *ListaGenero::DirAnterior(char *){
	return NULL;
}
NodoGenero *ListaGenero::DirUltimo(){
	return NULL;
}
void ListaGenero::AgregarNodoDespues(NodoGenero *, NodoGenero *){}