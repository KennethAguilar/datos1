#include "Personalizada.h"


Personalizada::Personalizada(void)
{
	setNombrePersonalizada("No definido");
}


Personalizada::~Personalizada(void)
{
}


Personalizada::Personalizada(char * _nombrePersonalizada){
	setNombrePersonalizada(_nombrePersonalizada);
}

char *Personalizada::getNombrePersonalizada(){
	return this->nombrePersonalizada;
}
void Personalizada::setNombrePersonalizada(char * _nombrePersonalizada){
	strcpy_s(this->nombrePersonalizada, _nombrePersonalizada);
}