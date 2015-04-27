// MusicPlayer.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "Interprete.h"
#include "ListaInterprete.h"


int _tmain(int argc, _TCHAR* argv[])
{

	ListaInterprete *listaInt = new ListaInterprete();
	Interprete *interp = new Interprete();

	char lugarNacimiento[30];
	int annoNacimiento;
	int edad;
	char nombre[30];
	
	int opcion = 0;
	do
	{
		cout << "1-Insertar: " << endl << "2-Mostrar " << endl;
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

			interp->setNombre(nombre);
			interp->setLugarNacimiento(lugarNacimiento);
			interp->setAnnoNacimiento(annoNacimiento);
			interp->setEdad(edad);

			listaInt->InsertarFinal(interp);

			cout << "Interprete Insertado";

			break;

		case 2:
			if(listaInt->vacia())
				cout << "La lista esta vacia" << endl << endl;
			else
				listaInt->desplegarLISTA();
			break;
		default:
			break;
		}
	} while (opcion != 0);
	
	system("PAUSE");

	return 0;
}

