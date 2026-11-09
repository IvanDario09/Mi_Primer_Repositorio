#pragma once
#include "Vehiculo.hpp"
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
    int calcTarifa() const override;
    string getTipo()const override;
    string info() const override;
    ~Coche()override;
};