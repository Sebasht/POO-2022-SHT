#include "Propietario.h"
using std::cout;
//Tipo de retorno + Nombre de clase + Nombre del método
void Propietario::setIdentificacion( double nIdentificacion ){
    this -> identificacion = nIdentificacion;
}
void Propietario::setNombre( string nombrePropietario ){
    this -> nombre = nombrePropietario;
}
void Propietario::setPropiedad( Propiedad propiedadPropietario ){
    this -> propiedad = propiedadPropietario;
}

double Propietario::getIdentificacion(){
    return this -> identificacion;
}
string Propietario::getNombre(){
    return this -> nombre;
}
Propiedad Propietario::getPropiedad(){
    return this -> propiedad;
}
double Propietario::pagarAdmin( int ascensor, double baseValue, float impuestoExtra ){
    return 0;
}
void  Propietario::infoPropietario(){

    cout << " El nombre del propietario es: " << nombre << "\n";
    cout << "La identificacion del propietario es: " << identificacion << "\n";
    cout << "Los datos de su propiedad son: " << "\n";
    //Imprimir propietarios!
    propiedad.infoPropiedad();
}