/**
 * @file Vehiculo.hpp
 * @brief Clase Vehiculo */
#pragma once
#include <iostream>
#include <string>
#include "Variante.hpp"

using namespace std;

class Propietario;
/** @brief Clase abstracta para herencia*/
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
/** @brief Operador de salida para imprimir información de un vehículo con cout */
ostream &operator << (ostream &os, Vehiculo &unVehiculo);