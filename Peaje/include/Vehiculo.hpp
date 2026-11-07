#pragma once
#include <iostream>
#include <string>
#include "../include/Propietario.hpp"
#include "../include/Variante.hpp"

using namespace std;

class Vehiculo{
    protected:
    string placa;
    Propietario* propietario;

    public:
    //Constructor
    Vehiculo();
    Vehiculo(string);

    //Setters
    void setPlaca(string);
    void asignarPropietario(Propietario*);

    //getters
    string getPlaca();
    Propietario* getPropietario();

    //metodos
    virtual void calcTarifa() const;
    virtual ~Vehiculo();
    virtual string getTipo()const=0;
    virtual string info()const;
};

ostream &operator << (ostream &os, Vehiculo &unVehiculo);