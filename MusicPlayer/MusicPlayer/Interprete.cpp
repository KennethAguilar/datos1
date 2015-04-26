#include "Interprete.h"


Interprete::Interprete(void)
{
	setLugarNacimiento("No definido");
	setAnnoNacimiento(0);
	setEdad(0);
	setNombre("No definido");

}


Interprete::~Interprete(void)
{
}

Interprete::Interprete(char * _LugarNacimiento, int _annoNacimiento, int _edad, char * _Nombre){
	setLugarNacimiento(_LugarNacimiento);
	setAnnoNacimiento(_annoNacimiento);
	setEdad(_edad);
	setNombre(_Nombre);
}

char *Interprete::getLugarNacimiento(){
	return this->lugarNacimiento;
}
void Interprete::setLugarNacimiento(char * _LugarNacimiento){
	strcpy(this->lugarNacimiento, _LugarNacimiento);
}

int Interprete::getAnnoNacimiento(){
	return this->annoNacimiento;
}
void Interprete::setAnnoNacimiento(int _annoNacimiento){
	this->annoNacimiento = _annoNacimiento;
}

int Interprete::getEdad(){
	return this->edad;
}
void Interprete::setEdad(int _Edad){
	this->edad = _Edad;
}

char *Interprete::getNombre(){
	return this->nombre;
}
void Interprete::setNombre(char * _Nombre){
	strcpy(this->nombre, _Nombre);
}