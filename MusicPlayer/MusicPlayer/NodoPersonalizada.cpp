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
void NodoPersonalizada::setSgte(Personalizada * _Sgte){
	this->Sgte = _Sgte;
}

NodoPersonalizada *NodoPersonalizada::getAnte(){
	return this->Ante;
}
void NodoPersonalizada::setAnte(Personalizada * _Ante){
	this->Ante = _Ante;
}