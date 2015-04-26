#include "ListaCancionXinterprete.h"


ListaCancionXinterprete::ListaCancionXinterprete(void)
{
	setCab(NULL);
}


ListaCancionXinterprete::~ListaCancionXinterprete(void)
{
}

NodoCancionXinterprete *ListaCancionXinterprete::getCab(){
	return this->cab;
}
void ListaCancionXinterprete::setCab(NodoCancionXinterprete * _cab){
	this->cab = _cab;
}