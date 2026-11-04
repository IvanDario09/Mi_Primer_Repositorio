#pragma once
#include <iostream>
#include <vector>
using namespace std;

class Ciudadano{
    protected:
    string id;
    string nombre;
    string fechaNacimiento;
    string ciudad;
    bool vecino;

    public:
    Ciudadano();
    Ciudadano(string, string, string,string,bool);

    //Setters
    void setId(string);
    void setNombre(string);
    void setFechaNacimiento(string);
    void setCiudad(string);
    void setVecino(bool); //como funciona? fe

    //getters
    string getId();
    string getNombre();
    string getFechaNacimiento();
    string getCiudad();
    bool getVecino(); 
    
    //metodos
};