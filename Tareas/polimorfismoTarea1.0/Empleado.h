//
// Created by edhq3 on 5/04/2022.
//

#ifndef POLIMORFISMO_EMPLEADO_H
#define POLIMORFISMO_EMPLEADO_H

#include <string>

using namespace std;

class Empleado {
    private:
        string firstName;
        string lastName;
        string socialSecurityNumber;
    public:
        Empleado( const string &, const string &, const string & );
        void setFirstName( const string & );
        string getFirstName() const;
        void setLastName( const string & );
        string getLastName() const;
        void setSocialSecurityNumber( const string & );
        string getSocialSecurityNumber() const;
        virtual double earnings() const;
        virtual void print() const;
};

#endif //POLIMORFISMO_EMPLEADO_H
