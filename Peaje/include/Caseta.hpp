#pragma once
#include <iostream>
#include <string>

using namespace std;
/*La caseta sabe cuántos
pasos lleva, cuánto dinero ha recaudado y cuántos vehículos de cada categoría han pasado.*/
class Operador;
class Caseta{
    private:
    string nombre;
    Operador* operador;
    int cochesRegistrados;
    int camionesRegistrados;
    int motosRegistradas;
    int BusesRegistrados;

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

    //Getters
    string getNombre();
    int getFechaRegistro();
    int getCochesRegistrados();
    int getCamionesRegistrados();
    int getMotosRegistrados();
    int getBusesRegistrados();

    //Metodos
    void cobrarPeaje();

};
