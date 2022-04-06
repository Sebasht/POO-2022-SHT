#include <iostream>
#include "CommissionEmployee.h"

using namespace std;

CommissionEmployee::CommissionEmployee(const int &first, const int &last, const int &ssn, double sales, double rate ) : Empleado( first, last, ssn ) {
    setGrossSales( sales );
    setCommissionRate( rate );
}

void CommissionEmployee::setCommissionRate(double rate ) {
    commissionRate = (( rate > 0.0  && rate < 1.0 ) ? rate : 0.0 );
}

double CommissionEmployee::getCommissionRate() const {
    return commissionRate;
}

void CommissionEmployee::setGrossSales(double sales ) {
    grossSales = (( sales < 0.0 ) ? 0.0 : sales );
}

double CommissionEmployee::getGrossSales() const {
    return grossSales;
}

double CommissionEmployee::earnings() const {
    return getCommissionRate() * getGrossSales();
}

void CommissionEmployee::print() const {
    cout << "\nGross sales: " << getGrossSales() << "; Commission rate: " << getCommissionRate();
}
