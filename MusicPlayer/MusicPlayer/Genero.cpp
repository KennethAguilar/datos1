#include "Genero.h"


Genero::Genero(void)
{
	setNombreGenero("No definido");
}


Genero::~Genero(void)
{
}

Genero::Genero(char * _nombreGenero){
	setNombreGenero(_nombreGenero);
}

char *Genero::getNombreGenero(){
	return this->nombreGenero;
}
void Genero::setNombreGenero(char * _nombreGenero){
	strcpy_s(this->nombreGenero, _nombreGenero);
}