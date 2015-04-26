#include "NodoGenero.h"


NodoGenero::NodoGenero(void)
{
}


NodoGenero::~NodoGenero(void)
{
}

NodoGenero::NodoGenero(Genero * _gener){
	setGener(_gener);
	setSgte(NULL);
}

Genero *NodoGenero::getGener(){
	return this->gener;
}
void NodoGenero::setGener(Genero * _gener){
	this->gener = _gener;
}

NodoGenero *NodoGenero::getSget(){
	return this->setSgte;
}
void NodoGenero::setSgte(NodoGenero * _Sgte){
	this->Sgte = _Sgte;
}
