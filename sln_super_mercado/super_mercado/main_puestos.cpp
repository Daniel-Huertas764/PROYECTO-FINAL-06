#include <iostream>
#include "Puestos.h"

using namespace std;

int main() {
    string puesto;
    int id_puesto = 0;
    int opcion;
    Puesto e;

    while (true) {
        system("cls");
        cout << "Seleccione una Opcion:" << endl;
        cout << "1. Crear Puesto" << endl; 
        cout << "2. Mostrar Puestos" << endl; 
        cout << "3. Actualizar Puesto" << endl;
        cout << "4. Borrar Puesto" << endl;
        cout << "0. Salir" << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;

        switch (opcion) {
        case 1:
            system("cls");
            cout << "Ingrese el Codigo del Puesto: ";
            cin >> id_puesto;
            cin.ignore();

            cout << "Ingrese Nombre del Puesto: ";
            getline(cin, puesto);

            e = Puesto(id_puesto, puesto);
            e.crear();
            system("pause");

            break;
        case 2:
            system("cls");
            e.leer();
            system("pause");
            break;
        case 3:
            system("cls");
            cout << "Ingrese ID a modificar: ";
            cin >> id_puesto;
            cin.ignore();
            cout << "Ingrese Nombre del Puesto: ";
            getline(cin, puesto);

            e = Puesto(id_puesto, puesto);
            e.actualizar();
            system("pause");
            break;
        case 4:
            system("cls");
            cout << "Ingrese ID a Eliminar: ";
            cin >> id_puesto;
            cin.ignore();

            e = Puesto(id_puesto, puesto);
            e.borrar();
            system("pause");
            break;
        
        case 0:
            cout << "Saliendo..." << endl;
            return 0;
        default:
            cout << "opcion no valida! Intente de nuevo." << endl;
          }

        }
            return 0;
     }
    

