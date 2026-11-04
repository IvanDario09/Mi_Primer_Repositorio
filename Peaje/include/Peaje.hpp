#pragma once
#include <iostream>
#include <vector>
#include "Vehiculo.hpp"
#include "Ciudadano.hpp"
using namespace std;

class Peaje{
    private:
    string nombre;
    vector<Vehiculo*> vehiculos;
    vector<Ciudadano*> ciudadanos;
    string fechaRegistro;
    string horaRegistro;

    public:
    //Constructor
    Peaje();
    Peaje(string,string,string);
    
    //Setters
    void setNombre(string);
    void setHoraRegistro(string);
    void setFechaRegistro(string);

    //Getters
    string getNombre();
    string getFechaRegistro();
    string getHoraRegistro();
    vector<Vehiculo*> getVehiculo();
    vector<Ciudadano*> getCiudadano();

    //Metodos
    void cobrarPeaje(Vehiculo*);

};
