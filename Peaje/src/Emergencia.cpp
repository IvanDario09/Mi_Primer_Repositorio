#include "Emergencia.hpp"

//Constructor
    Emergencia::Emergencia():unidad(""),desc(""),enEmergencia(0){}
    Emergencia::Emergencia(string unidad, string desc):unidad(unidad),desc(desc){this->enEmergencia=enEmergencia;};


    //Setters
    void Emergencia::setUnidad(string unidad){this->unidad=unidad;}
    void Emergencia::setDescripcion(string desc){this->desc=desc;}
    void Emergencia::setEmergencia(bool enEmergencia){this->enEmergencia=enEmergencia;}


    //Getters
    string Emergencia::getUnidad(){return unidad;}
    string Emergencia::getDescripcion(){return desc;}
    bool Emergencia::getEnEmergencia(){return enEmergencia;}


    //Métodos
    Emergencia::~Emergencia(){cout << "Ya no hay emergencia (destruida)"<<endl;}
