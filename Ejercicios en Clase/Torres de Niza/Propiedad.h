#include <iostream>

class Propiedad{
    private:
        int numeroPisos;
        double identPropiedad;
        float area;
        bool parqueadero;
    public:
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