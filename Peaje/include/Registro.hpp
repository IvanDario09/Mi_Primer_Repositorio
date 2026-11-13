/**
 * @file Registro.hpp
 * @brief Clase Registro que representa un registro de paso en la caseta.
 */
#pragma once
#include <iostream>
#include <string>
using namespace std;

/** @brief Clase Registro que representa un registro de paso en la caseta*/
class Registro{
    private:
    string placa;
    string categoria;
    int precioRegistro;

    public:
    //Constructor
    Registro();
    Registro(string,string,int);

    //Setters
    void setPlaca(string);
    void setCategoria(string);
    void setPrecioRegistro(int);

    //Getters
    string getPlaca()const;
    string getCategoria()const;
    int getPrecioRegistro()const;

    //Metodos
    string info()const;
    ~Registro();
};