#include "ListaGrupo.h"


ListaGrupo::ListaGrupo(void)
{
}


ListaGrupo::~ListaGrupo(void)
{
}

NodoGrupo *ListaGrupo::getCab(){
	return this->cab;
}
void ListaGrupo::setCab(NodoGrupo * _cab){
	this->cab = _cab;
}

bool ListaGrupo::vacia(){

	if (getCab() == NULL)
		return true;
	else
		return false;
}


NodoGrupo *ListaGrupo::DirNodo(char * _nombre){
	
		//Devuelve la direccion del nodo cuyo nombre sea _nombre
	//Sino existe devuelve null

	NodoGrupo *aux = getCab();
	bool encontrado = false;
	while((aux != NULL) && (!encontrado)){
		if(strcmp(aux->getGrupo()->getNombreGrupo(), _nombre) != 0)
			aux = aux->getSgte();
		else
			encontrado = true;
	}
	return aux;

}
NodoGrupo *ListaGrupo::DirAnterior(char * _nombre){


//Devuelve la direccion del nodo anterior al nodo del nombre _nombre
//Si no existe retorna NULL

	
	NodoGrupo *aux;
	if((getCab() == NULL ) || (getCab()->getGrupo()->getNombreGrupo(), _nombre) == 0)
		aux = NULL;
	else{
		aux = getCab();
		bool encontrado = false;
		while((aux->getSgte() != NULL) && (!encontrado)){
			if(strcmp(aux->getSgte()->getGrupo()->getNombreGrupo(), _nombre) != 0)
				aux = aux->getSgte();
			else
				encontrado = true;
		}
	}
	return aux;


}
NodoGrupo *ListaGrupo::DirUltimo(){


//Devuelve la direccion del ultimo nodo de la lista
//Si la lista esta vacia devuelve null

	NodoGrupo *aux = NULL;

	if(getCab() != NULL){
		aux = getCab();
		while(aux->getSgte()!=NULL){
			aux = aux ->getSgte(); //Para pasar al siguiente nodo
		}
	}
	return aux;


}
void ListaGrupo::AgregarNodoDespues(NodoGrupo * _ref, NodoGrupo * _nuevo){


	//Agrega el nodo _nuevo luego del nodo _ref
	//Pasos 2 y 3 de agregar

	_nuevo->setSgte(_ref->getSgte()); //Paso 2
	_ref->setSgte(_nuevo); //Paso 3

}

void ListaGrupo::InsertarFinal(Grupo* _grupo){


	//Agrege un nodo cuya informacion es _iCurso
	//Y lo agrega el final de la lista

	NodoGrupo *temp = new NodoGrupo(_grupo); //Paso 1
	NodoGrupo *ult = DirUltimo();
	if(ult != NULL)
		ult->setSgte(temp);
	else
		setCab(temp);


}
void ListaGrupo::desplegarLISTA(){


	//Desplegar todos los datos de la estructura 

	NodoGrupo *aux =getCab();
	cout << "Lista de Grupos" <<endl;
	while (aux != NULL)
	{
		cout << "Nombre del grupo: " << aux->getGrupo()->getNombreGrupo() << endl;
		cout << "Pais de procedencia: " << aux->getGrupo()->getPaisProcedencia() << endl;
		cout << "Fecha de creacion: " << aux->getGrupo()->getFechaCreacion() << endl << endl;

		aux = aux->getSgte();
	}


}