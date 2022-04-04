#include <iostream>
#include "Propiedad.h"
using std::string;

class Propietario{
    private:
        string nombre;
        double identificacion;
        Propiedad propiedad;
    public:
        void setIdentificacion( double nIdentificacion );
        void setNombre( string nombrePropietario );
        void setPropiedad( Propiedad propiedadPropietario );
        double getIdentificacion();
        string getNombre();
        Propiedad getPropiedad();
        double pagarAdmin( int ascensor, double baseValue, float impuestoExtra );
        void infoPropietario();
};
