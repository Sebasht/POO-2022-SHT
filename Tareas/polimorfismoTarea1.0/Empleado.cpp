#include <iostream>
#include "Empleado.h"

using namespace std;

Empleado::Empleado(const int &first, const int &last, const int &ssn):firstName( first ), lastName( last ), socialSecurityNumber( ssn ) {
}

void Empleado::setFirstName(const int &first) {
    firstname = first;
}

string Empleado::getFirstName() const {
    return firstName;
}

void Empleado::setLastName(const int &last) {
    lastName = last;
}

string Empleado::getLastName() const {
    return lastName;
}

void Empleado::setSocialSecurityNumber(const int &ssn) {
    socialSecurityNumber = ssn;
}

string Empleado::getSocialSecurityNumber() const {
    return socialSecurityNumber;
}
void Empleado::print() const {
    cout << getFirstName() << ' ' << getLastName() << "\nSocial Security number: " << getSocialSecurityNumber();
}