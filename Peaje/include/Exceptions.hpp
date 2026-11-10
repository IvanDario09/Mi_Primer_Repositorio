#pragma once
#include <exception>
#include <string>
using namespace std;

//Son tres: placa inválida, datos inválidos y descuadre de caja.
class ExcepcionPlaca : public exception{
    private:
    string msj;
    public:
    ExcepcionPlaca(string msj):msj(msj){}
    const char* what() const noexcept override{return msj.c_str();}
};

class ExcepcionDatosInvalidos : public exception{
    private:
    string msj;
    public:
    ExcepcionDatosInvalidos(string msj):msj(msj){}
    const char* what() const noexcept override{return msj.c_str();}
};

class ExcepcionDescuadreCaja : public exception{
    private:
    string msj;
    public:
    ExcepcionDescuadreCaja(string msj):msj(msj){}
    const char* what() const noexcept override{return msj.c_str();}
};