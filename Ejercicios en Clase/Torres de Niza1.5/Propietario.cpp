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

float Propietario::pagarAdmin( int costoAscensor, double costoBase, float recargo, float areaConRecargo ){
    costoAscensor = propiedad.getNumeroPisos() * costoAscensor;
    recargo = costoBase * recargo;
    if( propiedad.getArea() > areaConRecargo ){
        costoBase += recargo;
    }
    float total = costoBase + costoAscensor;
    return total;
}
void  Propietario::infoPropietario(){

    cout << " El nombre del propietario es: " << nombre << "\n";
    cout << "La identificacion del propietario es: " << identificacion << "\n";
    cout << "Los datos de su propiedad son: " << "\n";
    //Imprimir propietarios!
    propiedad.infoPropiedad();
}
void Propietario::ImprimirNombrePropietario(){
    cout << nombre << "\n";
}
Propiedad Propietario::getPropiedad(){
    return this->propiedad;
}