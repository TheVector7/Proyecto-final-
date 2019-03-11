#include <iostream>

using namespace std;
int opc;
char si;


int main()
{
	do {
		system("cls");
		cout << "¡BIENVENIDO! A LA FERRETERIA\n" << "ELIJA ALGUNA DE LAS SIGUIENTES OPCIONES \n";
		cout << "1.AGREGAR PRODUCTO\n 2.EDITAR PRODUCTO\n 3.SALIR\n Opcion:"; cin >> opc;

		switch (opc) {
		case 1:
			cout << "Bienvenido al apartado para agregar un producto";	system("pause>nul");

			break;
		case 2:
			cout << "Bienvenido al apartado para editar un producto";	system("pause>nul");
			break;
		case 3:
			cout << "¿Esta seguro que quiere salir?\n"; cin >> si;
			if (si == 'si' || 'sí' || 'yes') {
				return 0;
			}
			else {

			}
			break;
		default:
			cout << "Seleccione una de las 3 opciones por favor";
		}

	} while (opc > 1 && opc < 4);




		system("pause>nul");
		return 0;
}
