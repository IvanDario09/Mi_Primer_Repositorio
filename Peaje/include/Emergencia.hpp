/** @file Emergencia.hpp */
#pragma once
#include <string>
#include <iostream>

using namespace std;
/** @brief Clase emergencia*/
class Emergencia{
protected:
    string unidad;
    string desc;
    bool enEmergencia;
public:
    //Constructor
    Emergencia();
    Emergencia(string, string);


    //Setters
    void setUnidad(string);
    void setDescripcion(string);
    void setEmergencia(bool);


    //Getters
    string getUnidad();
    string getDescripcion();
    bool getEnEmergencia();


    //Métodos
    ~Emergencia();
};
