#include "ListaPersonalizada.h"


ListaPersonalizada::ListaPersonalizada(void)
{
	setCab(NULL);
}


ListaPersonalizada::~ListaPersonalizada(void)
{
}

NodoPersonalizada *ListaPersonalizada::getCab(){
	return this->cab;
}
void ListaPersonalizada::setCab(NodoPersonalizada * _cab){
	this->cab = _cab;
}

bool ListaPersonalizada::vacia(){

	if (getCab() == NULL)
		return true;
	else
		return false;
}

NodoPersonalizada *DirNodo(char *){
	return NULL;
}
NodoPersonalizada *DirUltimo(){
	return NULL;
}
void agregarNodoDespues(NodoPersonalizada *, NodoPersonalizada *){}