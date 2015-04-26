#include "ListaInterprete.h"


ListaInterprete::ListaInterprete(void)
{
}


ListaInterprete::~ListaInterprete(void)
{
}

NodoInterprete *ListaInterprete::getCab(){
	return this->cab;
}
void ListaInterprete::setCab(NodoInterprete * _cab){
	this->cab = _cab;
}

bool ListaInterprete::vacia(){
	
	if (getCab() == NULL)
		return true;
	else
		return false;
}


NodoInterprete *ListaInterprete::DirNodo(char *){}
NodoInterprete *ListaInterprete::DirAnterior(char){}
NodoInterprete *ListaInterprete::DirUltimo(){}
void ListaInterprete::agregarNodoDespues(NodoInterprete *, NodoInterprete *){}