#include <iostream>
#include "Propietario.h"
#include <vector>

using std::string;
using std::vector;

class Administracion{
    private:
        vector<Propietario> propietarios;
        int costoAscensor;
        double costoBase;
        float recargo;
        float areaConRecargo;
        int contadorId;
    public:
        Administracion();
        int getCostoAscensor();
        double getCostoBase();
        float getRecargo();
        float getAreaConRecargo();
        void inicializarDatos();
        int valorRecaudado();
        void imprimirInfo();
        void imprimirLista();
        void imprimirListaConParqueaderos();
        int CuantospropietariosConParqueaderos();

};