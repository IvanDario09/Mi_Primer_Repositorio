#pragma once
#include <iostream>
#include <string>
#include "Variante.hpp"

using namespace std;

class Propietario;

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
    virtual int calcTarifa() const;
    virtual ~Vehiculo();
    virtual string getTipo()const = 0;
    virtual string info()const;
};

ostream &operator << (ostream, Vehiculo);