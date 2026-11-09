#pragma once
#include "Vehiculo.hpp"
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
    int calcTarifa() const override;
    string info() const override;
    string getTipo() const override;
    ~Bus()override;

};