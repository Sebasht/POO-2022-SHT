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
        float pagarAdmin( int costoAscensor, double costoBase, float recargo, float areaConRecargo );
        void infoPropietario();
        void ImprimirNombrePropietario();
        Propiedad getPropiedad();
};
