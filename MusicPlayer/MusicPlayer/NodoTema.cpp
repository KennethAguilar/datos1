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

tema *NodoTema::getTema(){}
void NodoTema::setTema(tema *){}

NodoTema *NodoTema::getSgte(){}
NodoTema NodoTema::setSgte(){}

NodoTema *NodoTema::getAnte(){}
NodoTema NodoTema::setAnte(){}