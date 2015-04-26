#include "ListaTema.h"


ListaTema::ListaTema(void)
{
	setCab(NULL);
}


ListaTema::~ListaTema(void)
{
}

NodoTema *ListaTema::getCab(){
	return this->cab;
}
NodoTema ListaTema::setCab(NodoTema * _cab){
	this->cab = _cab;
}

bool ListaTema::vacia(){
	if (getCab() == NULL)
		return true;
	else
		return false;
}

NodoTema *ListaTema::DirNodo(int){}
NodoTema *ListaTema::DirUltimo(){}
void ListaTema::agregarNodoDespues(NodoTema *, NodoTema *){}