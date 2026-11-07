#pragma once
#include "../include/Persona.hpp"
#include "../include/Coche.hpp"

class Propietario : public Persona{
    private:
    Coche* miCoche;
    bool vecino;

    public:
    //Constructor
    Propietario();
    Propietario(bool);

    //Setters
    void setVecino(bool);

    //Getters
    bool getVecino();
    Coche* getCoche();

    //Metodos
    void asignarCoche(Coche*);
};