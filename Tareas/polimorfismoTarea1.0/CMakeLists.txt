cmake_minimum_required(VERSION 3.21)
project(polimorfismo)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(polimorfismo
        BasePlusCommissionEmployee.cpp
        BasePlusCommissionEmployee.h
        CommissionEmployee.cpp
        CommissionEmployee.h
        Empleado.cpp
        Empleado.h
        HourlyEmployee.cpp
        HourlyEmployee.h
        Main.cpp
        SalariedEmployee.cpp
        SalariedEmployee.h)
