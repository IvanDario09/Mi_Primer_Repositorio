/** 
 * @file Caseta.hpp
 * @brief Clase Caseta que representa una caseta de peaje.
 */

#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;
/** @brief Declaración de las clases relacionadas con Caseta */
class Vehiculo;
class Registro;
class Operador;
class Caseta{
    private:
    string nombre;
    Operador* operador;
    vector<Registro*> registros;
    int cochesRegistrados;
    int camionesRegistrados;
    int motosRegistradas;
    int busesRegistrados;
    int totalRegistrado;

    public:
    //Constructor
    Caseta();
    Caseta(string,int,int,int,int);
    
    //Setters
    void setNombre(string);
    void setCochesRegistrados(int);
    void setCamionesRegistrados(int);
    void setMotosRegistrados(int);
    void setBusesRegistrados(int);
    void setTotalRegistrado(int);
    void asignarOperador(Operador*);

    //Getters
    string getNombre();
    int getFechaRegistro();
    int getCochesRegistrados();
    int getCamionesRegistrados();
    int getMotosRegistrados();
    int getBusesRegistrados();
    int getTotalRegistrado();
    Operador* getOperador();
    vector<Registro*> getRegistro();

    //Metodos
    void agregarRegistro(Registro*);
    void cobrarPeaje(Vehiculo*);
    string infoCategoriasRegistradas();
    ~Caseta();
};
