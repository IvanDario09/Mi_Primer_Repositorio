#pragma once
#include <iostream>
#include <string>
using namespace std;

class Vehiculo{
    protected:
    string placa;

    public:
    //Constructor
    Vehiculo();
    Vehiculo(string);

    //Setters
    void setPlaca(string);

    //getters
    string getPlaca();

    //metodos
    virtual void calcTarifa() const;
    virtual ~Vehiculo();
    virtual string getTipo();//const=0
    virtual string info()const;
};

ostream &operator << (ostream &os, Vehiculo &unVehiculo);