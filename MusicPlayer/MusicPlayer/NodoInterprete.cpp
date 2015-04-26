#include "NodoInterprete.h"


NodoInterprete::NodoInterprete(void)
{
}


NodoInterprete::~NodoInterprete(void)
{
}

NodoInterprete::NodoInterprete(Interprete * _interprete){
	setInterprete(_interprete);
	setSgte(NULL);
}

Interprete *NodoInterprete::getInterprete(){
	return this->interp;
}
void NodoInterprete::setInterprete(Interprete * _interp){
	this->interp = _interp;
}

NodoInterprete *NodoInterprete::getSgte(){
	return this->Sgte;
}
void NodoInterprete::setSgte(NodoInterprete * _Sgte){
	this->Sgte = _Sgte;
}

ListaCancionXinterprete *NodoInterprete::getSLCanciones(){
	return this->SLCanciones;
}
void NodoInterprete::setSLCanciones(ListaCancionXinterprete * _SLCanciones){
	this->SLCanciones = _SLCanciones;
}