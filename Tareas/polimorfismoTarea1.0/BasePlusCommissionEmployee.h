//
// Created by edhq3 on 5/04/2022.
//

#ifndef POLIMORFISMO_BASEPLUSCOMMISSIONEMPLOYEE_H
#define POLIMORFISMO_BASEPLUSCOMMISSIONEMPLOYEE_H
#include "CommissionEmployee.h"

class BasePlusCommissionEmployee : public CommissionEmployee {
    private:
        double baseSalary;
    public:
        BasePlusCommissionEmployee( const string &, const string &, const string &, double = 0.0, double = 0.0, double = 0.0 );
        void setBaseSalary( double );
        double getBaseSalary() const;
        virtual double earnings() const;
        virtual double print() const;

};


#endif //POLIMORFISMO_BASEPLUSCOMMISSIONEMPLOYEE_H
