/** 
 * @file Exceptions.hpp
 * @brief Definición de las clases de excepciones personalizadas.
 */
#pragma once
#include <exception>
#include <string>
using namespace std;
//Son tres: placa inválida, datos inválidos y descuadre de caja.
/** @brief Clase para excepciones de placa inválida */
class ExcepcionPlaca : public exception{
    private:
    string msj;
    public:
    ExcepcionPlaca(string);
    const char* what() const noexcept override;
};
/** @brief Clase para excepciones de datos inválidos */
class ExcepcionDatosInvalidos : public exception{
    private:
    string msj;
    public:
    ExcepcionDatosInvalidos(string msj);
    const char* what() const noexcept override;
};

/** @brief Clase para excepciones de descuadre de caja */
class ExcepcionDescuadreCaja : public exception{
    private:
    string msj;
    public:
    ExcepcionDescuadreCaja(string msj);
    const char* what() const noexcept override;
};