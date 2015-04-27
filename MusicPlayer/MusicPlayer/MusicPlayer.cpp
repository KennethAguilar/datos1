// MusicPlayer.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "Interprete.h"
#include "ListaInterprete.h"
#include "Grupo.h"
#include "ListaGrupo.h"
#include "Genero.h"
#include "ListaGenero.h"


int _tmain(int argc, _TCHAR* argv[])
{

	ListaInterprete *listaInt = new ListaInterprete();
	Interprete *interp = new Interprete();

	char lugarNacimiento[30];
	int annoNacimiento;
	int edad;
	char nombre[30];

	ListaGrupo *listaGrup = new ListaGrupo();
	Grupo *grup = new Grupo();

	char paisProcedencia[30];
	int fechaCreacion;
	char nombreGrupo[30];

	ListaGenero *lisGen = new ListaGenero();
	Genero *gen = new Genero();
	
	char nombreGenero[30];

	int opcion = 0;
	do
	{
		cout << "1-Insertar interprete " << endl 
			<< "2-Mostrar interprete " << endl 
			<< "3-insertar grupo " <<endl 
			<< "4-mostrar grupo" << endl
			<< "5-insertar genero" << endl
			<< "6-mostrar genero" << endl
			;
			cin >> opcion;
		switch (opcion)
		{
			
		case 1:
			cout<< "Nombre " <<endl;
			cin >> nombre;
			cout << "Lugar de nacimiento " << endl;
			cin >> lugarNacimiento;
			cout << "Anno de nacimiento " << endl;
			cin>> annoNacimiento;
			cout <<"Edad " <<endl;
			cin >> edad;


			interp = new Interprete(lugarNacimiento, annoNacimiento, edad, nombre);


			listaInt->InsertarFinal(interp);

			cout << "Interprete Insertado " << endl << endl;

			break;

		case 2:
			if(listaInt->vacia())
				cout << "La lista esta vacia" << endl << endl;
			else
				listaInt->desplegarLISTA();
			break;

		case 3:
			cout<< "Nombre " <<endl;
			cin >> nombreGrupo;
			cout << "Pais de procedencia " << endl;
			cin >> paisProcedencia;
			cout << "Fecha de creacion " << endl;
			cin>> fechaCreacion;


			grup = new Grupo(paisProcedencia, fechaCreacion, nombreGrupo);

			listaGrup->InsertarFinal(grup);

			cout << "Grupo Insertado" << endl << endl;

			break;

		case 4:
			if(listaGrup->vacia())
				cout << "La lista esta vacia" << endl << endl;
			else
				listaGrup->desplegarLISTA();

			break;

		case 5:
			cout<< "Nombre " <<endl;
			cin >> nombreGenero;

			gen = new Genero(nombreGenero);

			lisGen->InsertarFinal(gen);

			cout << "Genero Insertado" << endl << endl;

			break;

		case 6:
			if(lisGen->vacia())
				cout << "La lista de generos esta vacia" << endl << endl;
			else
				lisGen->desplegarLISTA();

			break;

		default:
			break;
		}
	} while (opcion != 0);
	
	system("PAUSE");

	return 0;
}

