#include "NodoPersonalizada.h"


NodoPersonalizada::NodoPersonalizada(void)
{
	setPersonalizada(new Personalizada());
	setSgte(NULL);
	setAnte(NULL);
}


NodoPersonalizada::~NodoPersonalizada(void)
{
}


NodoPersonalizada::NodoPersonalizada(Personalizada * _perso){
	setPersonalizada(_perso);
	setSgte(NULL);
	setAnte(NULL);
}

Personalizada *NodoPersonalizada::getPerso(){
	return this->perso;
}
void NodoPersonalizada::setPersonalizada(Personalizada * _perso){
	this->perso = _perso;
}

NodoPersonalizada *NodoPersonalizada::getSgte(){
	return this->Sgte;
}
void NodoPersonalizada::setSgte(NodoPersonalizada * _Sgte){
	this->Sgte = _Sgte;
}

NodoPersonalizada *NodoPersonalizada::getAnte(){
	return this->Ante;
}
void NodoPersonalizada::setAnte(NodoPersonalizada * _Ante){
	this->Ante = _Ante;
}

ListaCancionXperso *NodoPersonalizada::getDLCanciones(){
	return this->DLCanciones;
}
void NodoPersonalizada::setDLCanciones(ListaCancionXperso *_DLCanciones){
	this->DLCanciones = _DLCanciones;
}