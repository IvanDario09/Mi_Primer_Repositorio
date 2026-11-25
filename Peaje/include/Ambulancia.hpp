/** @file Ambulancia.hpp */
#pragma once
#include "Vehiculo.hpp"
#include "Emergencia.hpp"


using namespace std;
/** @brief Clase ambulancia*/
class Ambulancia: public Vehiculo, public Emergencia{
    public:
    //Constructor
    Ambulancia();
    Ambulancia(string, string, string);


    //Metodos
    int calcTarifa() const override;
    string getTipo()const override;
    string info()const override;
    ~Ambulancia();
};