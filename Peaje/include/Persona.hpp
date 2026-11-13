/**
 * @file Persona.hpp
 * @brief Clase Persona que representa a una persona con atributos básicos.
 */

#pragma once
#include <iostream>
#include <string>
using namespace std;
class Persona{
    protected:
    string id;
    string nombre;
    string fechaNacimiento;

    public:
    Persona();
    Persona(string, string, string);

    //Setters
    void setId(string);
    void setNombre(string);
    void setFechaNacimiento(string);

    //getters
    string getId();
    string getNombre();
    string getFechaNacimiento();
    
    //metodos
    virtual string descripcionPersona();
    virtual ~Persona();
};