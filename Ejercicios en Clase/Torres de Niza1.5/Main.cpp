#include <iostream>
#include "Administracion.h"

using std::cout;
using std::cin;
using std::string;

void menu( Administracion administracion ){
    int opc = 0, opc2 = 0;
    cout << "Bienvenido a la base de datos de torre de Niza!" << "\n";
    do{
        cout << "Elige una opcion: " << "\n";
        cout << "\n";
        cout << "1. Mostrar lista de propietarios" << "\n";
        cout << "2. Mostrar informacion de todos los propietarios " << "\n";
        cout << "3. Mostrar informacion de todos los propietarios con parqueadero " << "\n";
        cout << "4. Valor recaudado en las torres de niza" << "\n";
        cout << "0. Salir" << "\n";
        cin >> opc;
        switch ( opc ){
            case 1:
                cout <<"\n";
                administracion.imprimirInfo();
                break;
            case 2:
                administracion.imprimirLista();
                default:
                break;
            case 3:
                administracion.imprimirListaConParqueaderos();
                cout << "Desea ver cuantos propietarios tienen parqueadero en total? " << "\n";
                cout << "1. Si  2.No " << "\n";
                cin >> opc2;
                switch (opc2)
                {
                case 1:
                    cout << "En las torres de Niza, hay: " << administracion.CuantospropietariosConParqueaderos() << " Propietarios con parqueadero" << "\n";
                    break;
                
                case 2:
                    break;
                }
                break;
            case 4:
                cout << "El valor recaudado por las torres de Niza es: " << administracion.valorRecaudado() << "\n";
                break;
        }
    }while( opc != 0 );

    
    
}

int main(){
    Administracion administracion;
    administracion.inicializarDatos();
    menu( administracion );
    return 0;
}
