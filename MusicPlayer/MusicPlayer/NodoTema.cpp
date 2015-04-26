#include "NodoTema.h"

NodoTema::NodoTema(void)
{	
	setTema(new tema());
	setSgte(NULL);
	setAnte(NULL);
	
	
}


NodoTema::~NodoTema(void)
{
}

NodoTema::NodoTema(tema * _tema){
	setTema(_tema);
	setSgte(NULL);
	setAnte(NULL);

}

tema *NodoTema::getTema(){
	return this->tem;
}
void NodoTema::setTema(tema * _tema){
	this->tem = _tema;
}

NodoTema *NodoTema::getSgte(){
	return this->sgte;
}
NodoTema NodoTema::setSgte(NodoTema * _Sgte){
	this->sgte = _Sgte;
}

NodoTema *NodoTema::getAnte(){
	return this->ante;
}
NodoTema NodoTema::setAnte(NodoTema * _Ante){
	this->ante = _Ante;
}