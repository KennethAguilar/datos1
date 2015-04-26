#include "Genero.h"


Genero::Genero(void)
{
	setNombreGenero("No definido");
	setInterprete("No definido");
	setGrupo("No definido");
}


Genero::~Genero(void)
{
}

Genero::Genero(char * _nombreGenero, char * _Interprete, char * _Grupo){
	setNombreGenero(_nombreGenero);
	setInterprete(_Interprete);
	setGrupo(_Grupo);
}

char *Genero::getNombreGenero(){
	return this->nombreGenero;
}
void Genero::setNombreGenero(char * _nombreGenero){
	strcpy_s(this->nombreGenero, _nombreGenero);
}

char *Genero::getInterprete(){
	return this->interprete;
}
void Genero::setInterprete(char * _interprete){
	strcpy_s(this->interprete, _interprete);
}

char *Genero::getGrupo(){
	return this->grupo;
}
void Genero::setGrupo(char * _grupo){
	strcpy_s(this->grupo, _grupo);
}