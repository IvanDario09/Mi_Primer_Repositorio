#pragma once
#include "Vehiculo.hpp"
using namespace std;

class Camion: public Vehiculo{
    private:
    unsigned int ejes;

    public:
    //Constructor
    Camion();
    Camion(string, unsigned int);

    //Setters
    void setEjes(unsigned int);

    //getters
    unsigned int getEjes();
    
    //metodos
    void calcTarifa() const override;
    string getTipo()const override;
    string info() const override;
    ~Camion()override;
};