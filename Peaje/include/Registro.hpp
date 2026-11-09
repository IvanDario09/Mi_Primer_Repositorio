#pragma once
#include <iostream>
#include <string>
using namespace std;

/*La caseta guarda un registro
del paso con la placa, la categoría y el valor cobrado en ese momento.*/
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
ostream &operator << (ostream, Registro);