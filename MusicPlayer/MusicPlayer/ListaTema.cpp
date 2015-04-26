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
void ListaTema::setCab(NodoTema * _cab){
	this->cab = _cab;
}

bool ListaTema::vacia(){
	if (getCab() == NULL)
		return true;
	else
		return false;
}

NodoTema *ListaTema::DirNodo(int){
	return NULL;
}
NodoTema *ListaTema::DirUltimo(){
	return NULL;
}
void ListaTema::agregarNodoDespues(NodoTema *, NodoTema *){}