#pragma once
#include "Vehiculo.hpp"
using namespace std;

class Moto: public Vehiculo{
    private:
    unsigned int cilindraje;

    public:
    //Constructor
    Moto();
    Moto(string,unsigned int);

    //Setters
    void setCilindraje(unsigned int);

    //getters
    unsigned int getCilindraje();

    //metodos
    void calcTarifa() const override;
    string getTipo()const override;
    string info() const override;
    ~Moto()override;
};