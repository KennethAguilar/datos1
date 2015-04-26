#include "NodoCancionXinterprete.h"


NodoCancionXinterprete::NodoCancionXinterprete(void)
{
	setID(0);
	setSalto(NULL);
	setSgte(NULL);
}


NodoCancionXinterprete::~NodoCancionXinterprete(void)
{
}

NodoCancionXinterprete::NodoCancionXinterprete(int _id){
	setID(0);
	setSalto(NULL);
	setSgte(NULL);
}

int NodoCancionXinterprete::getID(){
	return this->id;
}
void NodoCancionXinterprete::setID(int _id){
	this->id = _id;
}

NodoTema *NodoCancionXinterprete::getSalto(){
	return this->Salto;
}
void NodoCancionXinterprete::setSalto(NodoTema * _Salto){
	this->Salto = _Salto;
}

NodoCancionXinterprete *NodoCancionXinterprete::getSgte(){
	return this->Sgte;
}
void NodoCancionXinterprete::setSgte(NodoCancionXinterprete * _Sgte){
	this->Sgte = _Sgte;
}