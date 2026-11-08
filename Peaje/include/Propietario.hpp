#pragma once
#include "Persona.hpp"

class Persona;
class Coche;
class Propietario : public Persona{
    private:
    Coche* miCoche;
    bool vecino;

    public:
    //Constructor
    Propietario();
    Propietario(string, string, string,bool);

    //Setters
    void setVecino(bool);

    //Getters
    bool getVecino();
    Coche* getCoche();

    //Metodos
    void asignarCoche(Coche*);
    string descripcionPersona()override;
    ~Propietario()override;
};