#include "Genero.h"


Genero::Genero(void)
{
	setNombreGenero("No definido");
	setInterprete("No definido");
	setGenero("No definido");
}


Genero::~Genero(void)
{
}

Genero::Genero(char * _nombreGenero, char * _Interprete, char * _Genero){
	setNombreGenero(_nombreGenero);
	setInterprete(_Interprete);
	setGenero(_Genero);
}

char *Genero::getNombreGenero(){
	return this->nombreGenero;
}
void Genero::setNombreGenero(char * _nombreGenero){
	strcpy(this->nombreGenero, _nombreGenero);
}

char *Genero::getInterprete(){
	return this->interprete;
}
void Genero::setInterprete(char * _interprete){
	strcpy(this->interprete, _interprete);
}

char *Genero::getGenero(){
	return this->genero;
}
void Genero::setGenero(char * _genero){
	strcpy(this->genero, _genero);
}