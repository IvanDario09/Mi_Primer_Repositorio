#pragma once
#include "../include/Persona.hpp"

class Operador : public Persona{
    private:
    string codigo;

    public:
    //Constructor
    Operador();
    Operador(string);

    //Setters
    void setCodigo(string);

    //Getters
    string getCodigo();
};