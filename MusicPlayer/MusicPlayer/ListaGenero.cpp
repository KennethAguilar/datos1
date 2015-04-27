#include "ListaGenero.h"


ListaGenero::ListaGenero(void)
{
}


ListaGenero::~ListaGenero(void)
{
}

NodoGenero *ListaGenero::getCab(){
	return this->cab;
}
void ListaGenero::setCab(NodoGenero * _cab){
	this->cab = _cab;
}

bool ListaGenero::vacia(){

	if (getCab() == NULL)
		return true;
	else
		return false;
}

NodoGenero *ListaGenero::DirNodo(char * _nombre){

	//Devuelve la direccion del nodo cuyo nombre sea _nombre
	//Sino existe devuelve null

	NodoGenero *aux = getCab();
	bool encontrado = false;
	while((aux != NULL) && (!encontrado)){
		if(strcmp(aux->getGener()->getNombreGenero(), _nombre) != 0)
			aux = aux->getSget();
		else
			encontrado = true;
	}
	return aux;


}
NodoGenero *ListaGenero::DirAnterior(char * _nombre){


//Devuelve la direccion del nodo anterior al nodo del nombre _nombre
//Si no existe retorna NULL

	
	NodoGenero *aux;
	if((getCab() == NULL ) || (getCab()->getGener()->getNombreGenero(), _nombre) == 0)
		aux = NULL;
	else{
		aux = getCab();
		bool encontrado = false;
		while((aux->getSget() != NULL) && (!encontrado)){
			if(strcmp(aux->getSget()->getGener()->getNombreGenero(), _nombre) != 0)
				aux = aux->getSget();
			else
				encontrado = true;
		}
	}
	return aux;


}
NodoGenero *ListaGenero::DirUltimo(){


//Devuelve la direccion del ultimo nodo de la lista
//Si la lista esta vacia devuelve null

	NodoGenero *aux = NULL;

	if(getCab() != NULL){
		aux = getCab();
		while(aux->getSget()!=NULL){
			aux = aux ->getSget(); //Para pasar al siguiente nodo
		}
	}
	return aux;


}
void ListaGenero::AgregarNodoDespues(NodoGenero * _ref, NodoGenero * _nuevo){


	//Agrega el nodo _nuevo luego del nodo _ref
	//Pasos 2 y 3 de agregar

	_nuevo->setSgte(_ref->getSget()); //Paso 2
	_ref->setSgte(_nuevo); //Paso 3

}

void ListaGenero::InsertarFinal(Genero * _Genero){


	//Agrege un nodo cuya informacion es _iCurso
	//Y lo agrega el final de la lista

	NodoGenero *temp = new NodoGenero(_Genero); //Paso 1
	NodoGenero *ult = DirUltimo();
	if(ult != NULL)
		ult->setSgte(temp);
	else
		setCab(temp);


}
void ListaGenero::desplegarLISTA(){


	//Desplegar todos los datos de la estructura 

	NodoGenero *aux =getCab();
	cout << "Lista de Interpretes" <<endl;
	while (aux != NULL)
	{
		cout << "Nombre del genero: " << aux->getGener()->getNombreGenero() << endl << endl;

		aux = aux->getSget();
	}


}