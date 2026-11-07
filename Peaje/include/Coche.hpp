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
    void setPasajero(unsigned int);
    //getters
    unsigned int getPasajero() const;

    //metodos
    void calcTarifa() const override;
    string getTipo()const override;
    string info() const override;
};