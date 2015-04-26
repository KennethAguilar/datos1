#include "NodoCancionXperso.h"


NodoCancionXperso::NodoCancionXperso(void)
{
	setId(0);
	setSalto(NULL);
	setSgte(NULL);
}


NodoCancionXperso::~NodoCancionXperso(void)
{
}

NodoCancionXperso::NodoCancionXperso(int _id){
	setId(0);
	setSalto(NULL);
	setSgte(NULL);
}

int NodoCancionXperso::getId(){
	return this->id;
}
void NodoCancionXperso::setId(int _id){
	this->id = _id;
}

NodoTema *NodoCancionXperso::getSalto(){
	return this->Salto;
}
void NodoCancionXperso::setSalto(NodoTema *_salto){
	this->Salto = _salto;
}

NodoCancionXperso *NodoCancionXperso::getSgte(){
	return this->Sgte;
}
void NodoCancionXperso::setSgte(NodoCancionXperso * _Sgte){
	this->Sgte = _Sgte;
}