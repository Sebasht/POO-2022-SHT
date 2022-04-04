#include <iostream>
#include "Administracion.h"

using std::cout;

Administracion::Administracion(){
   
    cout << "Entre a Administracion \n";
    costoAscensor = 2000;
    areaConRecargo = 150;
    costoBase = 50000;
    recargo = 5/100;
    contadorId = 1;
    inicializarDatos();
    cout << "Termine la inicializacion \n";
}

int Administracion::getCostoAscensor(){
    return this-> costoAscensor;
}
double Administracion::getCostoBase(){
    return this-> costoBase;
}
float Administracion::getRecargo(){
    return this-> recargo;
}
int Administracion::valorRecaudado(){
    float valorRecaudado;
    float total = 0;
    for ( int i = 0; i < propietarios.size(); i++ ){
        valorRecaudado = propietarios[i].pagarAdmin( costoAscensor, costoBase, recargo, areaConRecargo );
        total += valorRecaudado;
    }
    return total;
}
void Administracion::imprimirInfo(){
    for ( int i = 0; i < propietarios.size(); i++ ){
        propietarios[i].ImprimirNombrePropietario();
    }
}
void Administracion::imprimirLista(){
    //Iterar un vector elemento por elemento y observar lo que tiene dentro
    //recorrer el arreglo e imprimir
    for ( int i = 0; i < propietarios.size(); i++ ){
        propietarios[i].infoPropietario();
    }
}

void Administracion::imprimirListaConParqueaderos(){
    //recorrer el arreglo e imprimir
    for ( int i = 0; i < propietarios.size(); i++ ){
        if( propietarios[i].getPropiedad().getParqueadero() == true ){
            propietarios[i].infoPropietario();
        }
    }
}

int Administracion::CuantospropietariosConParqueaderos(){
    int cont = 0;
    for ( int i = 0; i < propietarios.size(); i++ ){
        if( propietarios[i].getPropiedad().getParqueadero() == true ){
            cont ++;
        }
    }
    return cont;
}

void Administracion::inicializarDatos(){

    string nombre1 = "Debora Vilar";

    Propietario propiet1;
    Propietario propiet2;
    Propietario propiet3;
    Propietario propiet4;

    Propiedad prop1, prop2, prop3, prop4; //Llama al constructor por defecto
    Propiedad prop5( 195, contadorId++ );
    Propiedad prop6( contadorId++ );
    propiet1.setNombre( nombre1 );
    propiet1.setIdentificacion( 20202492 );
    propiet2.setNombre( "Ignacio Rodriguez" );
    propiet2.setIdentificacion( 30458452 );
    propiet3.setNombre( "Erika Munoz " );
    propiet3.setIdentificacion( 1058845781 );
    propiet4.setNombre( "Modesto Villaverde" );
    propiet4.setIdentificacion( 31321432 );

    prop1.setNumeroPisos( 3 );
    prop1.setArea( 400 );
    prop1.setIdentPropiedad( 2232121 );
    prop1.setParqueadero( false );
    prop2.setNumeroPisos( 2 );
    prop2.setArea( 120 );
    prop2.setIdentPropiedad( 32222121 );
    prop2.setParqueadero( true );
    prop3.setNumeroPisos( 5 );
    prop3.setArea( 70 );
    prop3.setIdentPropiedad( 21324532 );
    prop3.setParqueadero( false );
    prop4.setNumeroPisos( 9 );
    prop4.setArea( 180 );
    prop4.setIdentPropiedad( 2121212121 );
    prop4.setParqueadero( true );

    //Instanciamos los propietarios asignandoles una propiedad

    propiet1.setPropiedad( prop1 );
    propiet2.setPropiedad( prop2 );
    propiet3.setPropiedad( prop5 );
    propiet4.setPropiedad( prop6 );

    //Incluir los propietarios en el vector:
    propietarios.push_back( propiet1 );
    propietarios.push_back( propiet2 );
    propietarios.push_back( propiet3 );
    propietarios.push_back( propiet4 );
}
