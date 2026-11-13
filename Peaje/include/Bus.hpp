/** 
 * @file Bus.hpp
 * @brief Clase Bus
 * 
 * @brief metodo para llamar esta carpeta en los .cpp*/
#pragma once
/** @brief Nombre del archivo .hpp de bus */
#include "Vehiculo.hpp"
/** @brief Librerias necesarias para la clase Bus*/
using namespace std;

/** @brief Clase Bus que hereda los atributos de Vehiculo */
class Bus: public Vehiculo{
    private:
    unsigned int puestos;

    public:
    //Constructor
    Bus();
    Bus(string,unsigned int);

    //Setters
    void setPuestos(unsigned int);
    //getters
    int getPuesto() const;

    //metodos
    int calcTarifa() const override;
    string info() const override;
    string getTipo() const override;
    ~Bus()override;

};