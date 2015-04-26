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
	return this->getNombrePersonalizada;
}
void Personalizada::setNombrePersonalizada(char * _nombrePersonalizada){
	strcpy(this->nombrePersonalizada, _nombrePersonalizada);
}