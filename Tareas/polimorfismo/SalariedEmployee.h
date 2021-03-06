//
// Created by edhq3 on 5/04/2022.
//

#ifndef POLIMORFISMO_SALARIEDEMPLOYEE_H
#define POLIMORFISMO_SALARIEDEMPLOYEE_H
#include <iostream>
#include "Empleado.h"

class SalariedEmployee : public Empleado{
    private:
        double weeklySalary;
    public:
        SalariedEmployee( const string &, const string &, const string &, double = 0.0 );
        void setWeeklySalary( double );
        double getWeeklySalary() const;
        virtual double earnings() const;
        virtual void print() const;
};


#endif //POLIMORFISMO_SALARIEDEMPLOYEE_H
