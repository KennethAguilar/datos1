#include "Grupo.h"


Grupo::Grupo(void)
{
	setPaisProcedencia("No definido");
	setFechaCreacion(0);
	setNombreGrupo("No definido");
}


Grupo::~Grupo(void)
{
}

Grupo::Grupo(char * _paisProcedencia, int _FechaCreacion, char * _nombreGrupo){
	setPaisProcedencia(_paisProcedencia);
	setFechaCreacion(_FechaCreacion);
	setNombreGrupo(_nombreGrupo);
}

char *Grupo::getPaisProcedencia(){
	return this->paisProcedencia;
}
void Grupo::setPaisProcedencia(char * _paisPrecedencia){
	strcpy(this->paisProcedencia, _paisPrecedencia);
}

int Grupo::getFechaCreacion(){
	return this->fechaCreacion;
}
void Grupo::setFechaCreacion(int _fechaCreacion){
	this->fechaCreacion = _fechaCreacion;
}

char *Grupo::getNombreGrupo(){
	return this->nombreGrupo;
}
void Grupo::setNombreGrupo(char * _nombreGrupo){
	strcpy(this->nombreGrupo, _nombreGrupo);
}