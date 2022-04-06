//
// Created by edhq3 on 5/04/2022.
//

#ifndef POLIMORFISMO_HOURLYEMPLOYEE_H
#define POLIMORFISMO_HOURLYEMPLOYEE_H
#include "Empleado.h"

class HourlyEmployee : public Empleado {
    private:
        double wage;
        double hours;
    public:
        static const int hoursPerWeek = 168;
        HourlyEmployee( const string &, const string &, const string &, double = 0.0, double = 0.0 );
        void setWage( double );
        void setHours( double );
        double getWage() const;
        double getHours() const;
        virtual double earnings() const;
        virtual void  print() const;
};


#endif //POLIMORFISMO_HOURLYEMPLOYEE_H
