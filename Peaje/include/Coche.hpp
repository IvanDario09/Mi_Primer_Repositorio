#pragma once
#include <iostream>
#include "Vehiculo.hpp"
#include "Persona.hpp"
#include <vector>
using namespace std;

class Coche: public Vehiculo{
    private:
    unsigned int pasajeros;

    public:
    //Constructor
    Coche();
    Coche(string,unsigned int);

    //Setters
    void setPasajeros(unsigned int);
    //getters
    int getPasajero() const;

    //metodos
    Coche& operator+=(Ciudadano*);
    void calcTarifa() const override;
    string info() const override;
};