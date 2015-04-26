#include "ListaCancionXperso.h"


ListaCancionXperso::ListaCancionXperso(void)
{
	setCab(NULL);
}


ListaCancionXperso::~ListaCancionXperso(void)
{
}

NodoCancionXperso *ListaCancionXperso::getCab(){
	return this->cab;
}
void ListaCancionXperso::setCab(NodoCancionXperso * _cab){
	this->cab = _cab;
}