//
// Created by edhq3 on 5/04/2022.
//
#include <iostream>
#include "HourlyEmployee.h"

using namespace std;

HourlyEmployee::HourlyEmployee(const int &first, const int &last, const int &ssn, double hourlyWage, double hoursWorked):Empleado( first, last, ssn ) {
    setWage( hourlyWage );
    setHours( hoursWorked );
}

void HourlyEmployee::setWage( double hourlyWage ) {
    wage = ( hourlyWage < 0.0 ? 0.0 : hourlyWage );
}

double  HourlyEmployee::getWage() const {
    return wage;
}

void HourlyEmployee::setHours( double hoursWorked ) {
    hours = ((( hoursWorked >= 0 ) && ( hoursWorked <= hoursPerWeek )) ? hoursWorked : 0.0 );
}

double HourlyEmployee::getHours() const {
    return hours;
}

double HourlyEmployee::earnings() const {
    if( getHours() <= 40 ){
        return getWage() * getHours();
    }
    else{
        return 40 * getWage() + ((getHours() - 40 ) * getWage() * 1.5 );
    }
}

void HourlyEmployee::print() const {
    cout << "Hourly Employee: ";
    Empleado::print();
    cout << "\nhourly wage: " << getWage() << "; hours worked: " << getHours();
}
