#include <iostream>
#include "Puestos.h"
#include "Proveedor.h"

using namespace std;

int main() {
    string puesto;
    int id_puesto = 0;
    int opcion;

    int id_proveedor = 0;
    int telefono = 0;
    string proveedor, nit, direccion;

    Puesto e;
    Proveedor s;

    while (true) {
        system("cls");
        cout << "Seleccione una Opcion:" << endl;
        cout << "1. Crear Puesto" << endl; 
        cout << "2. Mostrar Puestos" << endl; 
        cout << "3. Actualizar Puesto" << endl;
        cout << "4. Borrar Puesto" << endl;
        cout << "////////////////" << endl;
        cout << "5. Crear Proveedor" << endl;
        cout << "6. Mostrar Proveedores" << endl;
        cout << "7. Actualizar Proveedires" << endl;
        cout << "8. Eliminar Proveedor" << endl;
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
        case 5:
            system("cls");
            cout << "Ingrese el ID del proveedor: ";
            cin >> id_proveedor;
            cin.ignore();

            cout << "Ingrese Nombre del Proveedor: ";
            getline(cin, proveedor);

            cout << "Ingrese numero de NIT: ";
            getline(cin, nit);

            cout << "Ingrese la direccion del proveedor: ";
            getline(cin, direccion);

            cout << "Ingrese el telefono del proveedor: ";
            cin >> telefono;
            cin.ignore();

            s = Proveedor(id_proveedor,proveedor,nit,direccion,telefono);
            s.crear();
            system("pause");
            break;
        case 6:
            system("cls");
            s = Proveedor(id_proveedor, proveedor, nit, direccion, telefono);
            s.leer();
            system("pause");
            break;
        case 7 :
            system("cls");
            cout << "Ingrese ID a modificar: ";
            cin >> id_proveedor;
            cin.ignore();
            cout << "Ingrese Nombre del Proveedor: ";
            getline(cin, proveedor);
            cout << "Ingrese nit del Proveedor: ";
            getline(cin, nit);
            cout << "Ingrese Direccion del Proveedor: ";
            getline(cin, direccion);
            cout << "Ingrese numero del Proveedor: ";
            cin >> telefono;
            cin.ignore();

            s = Proveedor(id_proveedor, proveedor, nit, direccion, telefono);
            s.actualizar();
            system("pause");
            break;
        case 8:
            system("cls");
            cout << "Ingrese ID a Eliminar: ";
            cin >> id_proveedor;
            cin.ignore();

            s = Proveedor(id_proveedor, proveedor, nit, direccion, telefono);
            s.borrar();
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
    

