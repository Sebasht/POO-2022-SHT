#include <iostream>
#include "SalariedEmployee.h"

using namespace std;

SalariedEmployee::SalariedEmployee(const int &first, const int &last, const int &ssn, double salary): Empleado( first, last, ssn ) {
    setWeeklySalary( salary );
}

double SalariedEmployee::getWeeklySalary() const {
    return weeklySalary;
}

double SalariedEmployee::earnings() const {
    return getWeeklySalary();
}
void SalariedEmployee::print() const {
    cout << "Salaried Employee: ";
    Empleado::print();
    cout << "\nWeekly salary: " << getWeeklySalary();
}