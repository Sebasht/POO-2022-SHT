#include <iostream>
#include "Propietario.h"
#include <vector>

using std::string;
using std::vector;

class Administracion{
    private:
        vector<Propietario> propietarios;
        int costoAscensor;
        int costoBase;
        float recargo;
    public:
        int valorRecaudado();
        void imprimirInfo();
        void imprimirLista();

};