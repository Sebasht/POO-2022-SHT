//
// Created by edhq3 on 6/04/2022.
//

#ifndef POLIMORFISMO_DAILYEMPLOYEE_H
#define POLIMORFISMO_DAILYEMPLOYEE_H
#include "Empleado.h"



class DailyEmployee : public Empleado {
    private:
        int workedDay;
        double dailyWage;
    public:
        static const int daysPerWeek = 7;
        DailyEmployee( const string &, const string &, const string &, double = 0.0, double = 0.0 );
        void setWorkedDay( int );
        void setDailyWage( double );
        int getWorkedDay() const;
        double getDailyWage() const;
        virtual double earnings() const;
        virtual void print() const;

};


#endif //POLIMORFISMO_DAILYEMPLOYEE_H
