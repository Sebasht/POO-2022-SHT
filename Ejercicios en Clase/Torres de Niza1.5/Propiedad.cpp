#include "Propiedad.h"
using std::cout;

Propiedad::Propiedad(){
    cout << "Entre al constructor por defecto \n";
    parqueadero = false; //Todas las propiedades inicializaran sin parqueadero por defecto
    identPropiedad = 0;
    numeroPisos = 0;
    area = 0;
}
Propiedad::Propiedad( int piso, double identificacionPropiedad){ //se le manda valores y los objetos tendrán valores por defecto
    cout << "Entre al constructor de varios parametros \n";
    this->numeroPisos = piso;
    this->identPropiedad = identificacionPropiedad;
    this->parqueadero = false;
    this->area = 0;
}
Propiedad::Propiedad( double identificacionProp ): Propiedad(){
    cout << "Entre al constructor de un  parametro \n";
    this->identPropiedad = identificacionProp;
}
void Propiedad::setNumeroPisos( int nPisos ){
    this -> numeroPisos = nPisos;
}
void Propiedad::setArea( float areaProp ){
    this ->area = areaProp;
}
void Propiedad::setIdentPropiedad( double nId ){
    this -> identPropiedad = nId;
}
void Propiedad::setParqueadero( bool parking ){
    this -> parqueadero = parking; 
}
int Propiedad::getNumeroPisos(){
    return this -> numeroPisos;
}
float Propiedad::getArea(){
    return this -> area;
}
double Propiedad::getIdentPropiedad(){
    return this -> identPropiedad;
}
bool Propiedad::getParqueadero(){
    return this -> parqueadero;
}
void Propiedad::infoPropiedad(){
    cout << "El numero de piso de la propiedad es: " << numeroPisos << "\n";
    cout << "El area de la propiedad es: " << area << "\n";
    cout << "La identificacion de la propiedad es: " << identPropiedad << "\n";
    cout << "La propiedad tiene parqueadero: " << parqueadero << "\n";
}
