#include <iostream>
#include "Propietario.h"

using std::cout;
using std::cin;
using std::string;

int mostrarinfo( Propietario propiet1, Propietario propiet2, Propietario propiet3, Propietario propiet4 ){

    cout << "Info propietario 1: " << "\n";
    propiet1.infoPropietario();
    cout << "Info propietario 2: " << "\n";
    propiet2.infoPropietario();
    cout << "Info propietario 3: " << "\n";
    propiet3.infoPropietario();
    cout << "Info propietario 4: " << "\n";
    propiet4.infoPropietario();

    return 0;
}

int inicializarDatos(){

    string nombre1 = "Debora Vilar";

    Propietario propiet1;
    Propietario propiet2;
    Propietario propiet3;
    Propietario propiet4;

    Propiedad prop1, prop2, prop3, prop4;

    propiet1.setNombre( nombre1 );
    propiet1.setIdentificacion( 20202492 );
    propiet2.setNombre( "Ignacio Rodriguez" );
    propiet2.setIdentificacion( 30458452 );
    propiet3.setNombre( "Erika Munoz " );
    propiet3.setIdentificacion( 1058845781 );
    propiet4.setNombre( "Modesto Villaverde" );
    propiet4.setIdentificacion( 31321432 );

    prop1.setNumeroPisos( 3 );
    prop1.setArea( 40 );
    prop1.setIdentPropiedad( 2232121 );
    prop1.setParqueadero( false );
    prop2.setNumeroPisos( 2 );
    prop2.setArea( 45 );
    prop2.setIdentPropiedad( 32222121 );
    prop2.setParqueadero( true );
    prop3.setNumeroPisos( 5 );
    prop3.setArea( 70 );
    prop3.setIdentPropiedad( 21324532 );
    prop3.setParqueadero( false );
    prop4.setNumeroPisos( 9 );
    prop4.setArea( 100 );
    prop4.setIdentPropiedad( 2121212121 );
    prop4.setParqueadero( true );

    //Instanciamos los propietarios asignandoles una propiedad

    propiet1.setPropiedad( prop1 );
    propiet2.setPropiedad( prop2 );
    propiet3.setPropiedad( prop3 );
    propiet4.setPropiedad( prop4 );

    //mostrar los datos
    mostrarinfo( propiet1, propiet2, propiet3, propiet4 );

    return 0;
}


int main(){
    string nombre;
    cout << "Funciono, escribe tu nombre: ";
    cin >> nombre;
    cout << "Tu nombre es: " << nombre << "\n"; 
    inicializarDatos();
    return 0;
}
