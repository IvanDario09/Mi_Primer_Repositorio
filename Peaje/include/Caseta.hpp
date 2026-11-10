#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;
/*La caseta sabe cuántos
pasos lleva, cuánto dinero ha recaudado y cuántos vehículos de cada categoría han pasado.*/

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
    ~Caseta();
};
