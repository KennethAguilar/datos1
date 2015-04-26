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

NodoGenero *ListaGenero::DirNodo(char *){}
NodoGenero *ListaGenero::DirAnterior(char *){}
NodoGenero *ListaGenero::DirUltimo(){}
void ListaGenero::AgregarNodoDespues(NodoGenero *, NodoGenero *){}