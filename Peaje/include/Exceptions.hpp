#pragma once
#include <exception>
#include <string>
using namespace std;

//Son tres: placa inválida, datos inválidos y descuadre de caja.
class ExcepcionPlaca : public exception{
    private:
    string msj;
    public:
    ExcepcionPlaca(string);
    const char* what() const noexcept override;
};

class ExcepcionDatosInvalidos : public exception{
    private:
    string msj;
    public:
    ExcepcionDatosInvalidos(string msj);
    const char* what() const noexcept override;
};

class ExcepcionDescuadreCaja : public exception{
    private:
    string msj;
    public:
    ExcepcionDescuadreCaja(string msj);
    const char* what() const noexcept override;
};