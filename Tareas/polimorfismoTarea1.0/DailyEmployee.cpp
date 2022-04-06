#include <iostream>
#include "DailyEmployee.h"

using namespace std;

DailyEmployee::DailyEmployee(const string &first, const string &last, const string &ssn, double workedDay, double dailyWage) : Empleado( first, last, ssn ) {
    setWorkedDay( workedDay );
    setDailyWage( dailyWage );
}

void DailyEmployee::setDailyWage( double wage ) {
    dailyWage = ( wage < 0.0 ? 0.0 : wage );
}

double DailyEmployee::getDailyWage() const {
    return dailyWage;
}

void DailyEmployee::setWorkedDay( int day ) {
    workedDay = ((( day >= 0 ) && ( day <= daysPerWeek )) ? day : 0.0 );
}

int DailyEmployee::getWorkedDay() const {
    return workedDay;
}

double DailyEmployee::earnings() const {
    if( getWorkedDay() > 0  ){
        return getDailyWage() * getWorkedDay();
    }
    else{
        return 0;
    }
}

void DailyEmployee::print() const {
    cout << "Daily Employee";
    Empleado::print();
    cout << "Salary Worked days: " << getWorkedDay() << "\nDaily Wage: " << getDailyWage();
}
