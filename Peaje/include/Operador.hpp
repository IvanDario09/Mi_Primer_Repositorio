/**
 * @file Operador.hpp
 * @brief Clase Operador que hereda de Persona.
 */
#pragma once
#include "Persona.hpp"
class Operador : public Persona{
    private:
    string codigo;

    public:
    //Constructor
    Operador();
    Operador(string, string, string,string);

    //Setters
    void setCodigo(string);

    //Getters
    string getCodigo();

    //Metodos
    string descripcionPersona()override;
    ~Operador()override;
};