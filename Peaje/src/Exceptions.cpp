#include "Exceptions.hpp"
/** @brief Constructor de la clase ExcepcionPlaca.
* @param msj mensaje de error que se mostrará al usuario.*/
ExcepcionPlaca::ExcepcionPlaca(string msj):msj(msj){}
const char* ExcepcionPlaca::what() const noexcept{return msj.c_str();}

/** @brief Constructor de la clase ExcepcionDatosInvalidos.
* @param msj mensaje de error que se mostrará al usuario.*/
ExcepcionDatosInvalidos::ExcepcionDatosInvalidos(string msj):msj(msj){}
const char* ExcepcionDatosInvalidos::what() const noexcept{return msj.c_str();}

/** @brief Constructor de la clase ExcepcionDescuadreCaja.
* @param msj mensaje de error que se mostrará al usuario.*/
ExcepcionDescuadreCaja::ExcepcionDescuadreCaja(string msj):msj(msj){}
const char* ExcepcionDescuadreCaja::what() const noexcept{return msj.c_str();}