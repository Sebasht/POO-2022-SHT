#include <iostream>

class Propiedad{
    private:
        int numeroPisos;
        double identPropiedad;
        float area;
        bool parqueadero;
    public:
        Propiedad(); //Constructor por defecto
        Propiedad( int piso, double identificacionPropiedad );
        Propiedad( double identificacionProp );
        void setNumeroPisos( int nPisos );
        void setArea( float areaProp );
        void setIdentPropiedad( double nId );
        void setParqueadero( bool parking );
        int getNumeroPisos();
        float getArea();
        double getIdentPropiedad();
        bool getParqueadero();
        void infoPropiedad();
};