#pragma once
#include <iostream>
#include <vector>
#include "../include/Vehiculo.hpp"
using namespace std;

class Bus: public Vehiculo{
    private:
    unsigned int puestos;

    public:
    //Constructor
    Bus();
    Bus(string,unsigned int);

    //Setters
    void setPuestos(unsigned int);
    //getters
    int getPuesto() const;

    //metodos
    void calcTarifa() const override;
    string info() const override;
};