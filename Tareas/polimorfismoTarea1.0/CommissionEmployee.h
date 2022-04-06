//
// Created by edhq3 on 5/04/2022.
//

#ifndef POLIMORFISMO_COMMISSIONEMPLOYEE_H
#define POLIMORFISMO_COMMISSIONEMPLOYEE_H
#include "Empleado.h"

class CommissionEmployee : public Empleado {
    private:
        double grossSales;
        double commissionRate;
    public:
        CommissionEmployee( const string &, const string &, const string &, double = 0.0, double = 0.0 );
        void setCommissionRate( double );
        void setGrossSales( double );
        double getCommissionRate() const;
        double getGrossSales() const;
        virtual double earnings() const;
        virtual void print() const;
};


#endif //POLIMORFISMO_COMMISSIONEMPLOYEE_H
