#include "NodoGrupo.h"


NodoGrupo::NodoGrupo(void)
{
}


NodoGrupo::~NodoGrupo(void)
{
}

NodoGrupo::NodoGrupo(Grupo * _grup){
	setGrupo(_grup);
	setSgte(NULL);
}

Grupo *NodoGrupo::getGrupo(){
	return this->grup;
}
void NodoGrupo::setGrupo(Grupo * _grup){
	this->grup = _grup;
}

NodoGrupo *NodoGrupo::getSgte(){
	return this->Sgte;
}
void NodoGrupo::setSgte(NodoGrupo * _Sgte){
	this->Sgte = _Sgte;
}