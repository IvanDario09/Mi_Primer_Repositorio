#pragma once
#include <iostream>
using namespace std;

class Persona{
    protected:
    string id;
    string nombre;
    string fechaNacimiento;
    string ciudad;

    public:
    Persona();
    Persona(string, string, string,string);

    //Setters
    void setId(string);
    void setNombre(string);
    void setFechaNacimiento(string);
    void setCiudad(string);

    //getters
    string getId();
    string getNombre();
    string getFechaNacimiento();
    string getCiudad();
    
    //metodos
};