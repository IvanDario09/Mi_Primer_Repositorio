#pragma once
#include <iostream>
#include "Vehiculo.hpp"
using namespace std;

class Camion: public Vehiculo{
    private:
    unsigned int ejes;

    public:
    //Constructor
    Camion();
    Camion(string, unsigned int);

    //Setters
    void setEjes(unsigned int);

    //getters
    unsigned int getEjes();
    
    //metodos
    void calcTarifa() const override;
};