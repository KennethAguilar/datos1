#include "ListaInterprete.h"


ListaInterprete::ListaInterprete(void)
{
}


ListaInterprete::~ListaInterprete(void)
{
}

NodoInterprete *ListaInterprete::getCab(){
	return this->cab;
}
void ListaInterprete::setCab(NodoInterprete * _cab){
	this->cab = _cab;
}

bool ListaInterprete::vacia(){
	
	if (getCab() == NULL)
		return true;
	else
		return false;
}


NodoInterprete *ListaInterprete::DirNodo(char * _nombre){

	//Devuelve la direccion del nodo cuyo nombre sea _nombre
	//Sino existe devuelve null

	NodoInterprete *aux = getCab();
	bool encontrado = false;
	while((aux != NULL) && (!encontrado)){
		if(strcmp(aux->getInterprete()->getNombre(), _nombre) != 0)
			aux = aux->getSgte();
		else
			encontrado = true;
	}
	return aux;


}
NodoInterprete *ListaInterprete::DirAnterior(char * _nombre){


//Devuelve la direccion del nodo anterior al nodo del nombre _nombre
//Si no existe retorna NULL

	
	NodoInterprete *aux;
	if((getCab() == NULL ) || (getCab()->getInterprete()->getNombre(), _nombre) == 0)
		aux = NULL;
	else{
		aux = getCab();
		bool encontrado = false;
		while((aux->getSgte() != NULL) && (!encontrado)){
			if(strcmp(aux->getSgte()->getInterprete()->getNombre(), _nombre) != 0)
				aux = aux->getSgte();
			else
				encontrado = true;
		}
	}
	return aux;


}
NodoInterprete *ListaInterprete::DirUltimo(){


//Devuelve la direccion del ultimo nodo de la lista
//Si la lista esta vacia devuelve null

	NodoInterprete *aux = NULL;

	if(getCab() != NULL){
		aux = getCab();
		while(aux->getSgte()!=NULL){
			aux = aux ->getSgte(); //Para pasar al siguiente nodo
		}
	}
	return aux;


}
void ListaInterprete::agregarNodoDespues(NodoInterprete * _ref, NodoInterprete * _nuevo){


	//Agrega el nodo _nuevo luego del nodo _ref
	//Pasos 2 y 3 de agregar

	_nuevo->setSgte(_ref->getSgte()); //Paso 2
	_ref->setSgte(_nuevo); //Paso 3

}

void ListaInterprete::InsertarFinal(Interprete* _interprete){


	//Agrege un nodo cuya informacion es _iCurso
	//Y lo agrega el final de la lista

	NodoInterprete *temp = new NodoInterprete(_interprete); //Paso 1
	NodoInterprete *ult = DirUltimo();
	if(ult != NULL)
		ult->setSgte(temp);
	else
		setCab(temp);


}
void ListaInterprete::desplegarLISTA(){


	//Desplegar todos los datos de la estructura 

	NodoInterprete *aux =getCab();
	cout << "Lista de Interpretes" <<endl;
	while (aux != NULL)
	{
		cout << "Nombre: " << aux->getInterprete()->getNombre() << endl;
		cout << "Lugar de nacimiento: " << aux->getInterprete()->getLugarNacimiento() << endl;
		cout << "Edad: " << aux->getInterprete()->getEdad() << endl;
		cout << "Anno de nacimiento: " << aux->getInterprete()->getAnnoNacimiento() << endl << endl;

		aux = aux->getSgte();
	}


}