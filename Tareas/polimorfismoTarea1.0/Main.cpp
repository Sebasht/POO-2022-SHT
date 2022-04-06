#include <iostream>
#include <iomanip>
#include <vector>
#include <typeinfo>
#include "Empleado.h"
#include "SalariedEmployee.h"
#include "HourlyEmployee.h"
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"
#include "DailyEmployee.h"
using namespace std;

int main(){
    cout << fixed << setprecision( 2 );
    vector<Empleado*> empleados( 4 );

    empleados[0] = new SalariedEmployee( "Jhon", "Smith", "111-11-1111", 800 );
    empleados[1] = new HourlyEmployee( "Karen", "Price", "222-22-2222", 16.75, 45 );
    empleados[2] = new CommissionEmployee( "Sue", "Jones", "333-33-3333", 1000, .06 );
    empleados[3] = new BasePlusCommissionEmployee( "Bob", "Lewis", "444-44-4444", 5000, .04, 300 );
    empleados[4] = new DailyEmployee( "Sebastian", "Hernandez", "555-55-5555", 5, 1000 );

    for ( size_t i = 0; i < empleados.size(); i++ ){
        empleados[i]->print();
        cout << endl;

        BasePlusCommissionEmployee *derivedPtr = dynamic_cast < BasePlusCommissionEmployee * > ( empleados[i] );
        if( derivedPtr != 0 ){
            double oldBaseSalary = derivedPtr->getBaseSalary();
            cout << " old base salary: $" << oldBaseSalary << endl;
            derivedPtr->setBaseSalary( 1.10 * oldBaseSalary );
            cout << "new base salary with 10% increase is: $" << derivedPtr->getBaseSalary() << endl;
        }
        cout << "earned $" << empleados[i]->earnings() << "\n\n";
    }

    for( size_t j = 0; j < empleados.size(); j++ ){
        cout << "deleting object of " << typeid( * empleados[j] ).name() << endl;
        delete empleados[ j ];
    }
    return 0;
}