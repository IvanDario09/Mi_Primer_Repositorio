/**
 * @file Propietario.hpp
 * @brief Clase Propietario que hereda de Persona y representa a un propietario de un coche.
 */

#pragma once
/** @brief Nombre del archivo .hpp de Propietario */
#include "Persona.hpp"
/** @brief Clase Propietario que hereda de Persona y representa a un propietario de un coche */
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