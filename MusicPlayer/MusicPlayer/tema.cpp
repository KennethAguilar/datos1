#include "tema.h"


tema::tema(void)
{
	setNombreTema("No definido");
	setNombreDisco("No definido");
	setAnno(0);
	setEmpresaDisquera("No definido");
	setGrupo("No definido");
	setGenero("No definido");
}


tema::~tema(void)
{
}

tema::tema(char *_NombreTema, char * _NombreDisco, int _anno, char * _EmpresaDisquera, char * _Grupo, char * _Genero){

	setNombreTema(_NombreTema);
	setNombreDisco(_NombreDisco);
	setAnno(_anno);
	setEmpresaDisquera(_EmpresaDisquera);
	setGrupo(_Grupo);
	setGenero(_Genero);

}

char *tema::getNombreTema(){
	return this->nombreTema;
}
void tema::setNombreTema(char * _NombreTema){
	strcpy_s(this->nombreTema, _NombreTema);
}

char *tema::getNombreDisco(){
	return this->nombreDisco;
}
void tema::setNombreDisco(char * _NombreDisco){
	strcpy_s(this->nombreDisco, _NombreDisco);
}

int tema::getAnno(){
	return this ->anno;
}
void tema::setAnno(int _anno){
	this->anno = _anno;
}

char *tema::getEmpresaDisquera(){
	return this->empresaDisquera;
}
void tema::setEmpresaDisquera(char * _empresaDisquera){
	strcpy_s(this->empresaDisquera, _empresaDisquera);
}

char *tema::getGrupo(){
	return this->grupo;
}
void tema::setGrupo(char * _grupo){
	strcpy_s(this->grupo, _grupo);
}

char *tema::getGenero(){
	return this->genero;
}
void tema::setGenero(char * _genero){
	strcpy_s(this->genero, _genero);
}