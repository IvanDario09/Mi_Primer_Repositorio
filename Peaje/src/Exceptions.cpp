#include "Exceptions.hpp"

ExcepcionPlaca::ExcepcionPlaca(string msj):msj(msj){}
const char* ExcepcionPlaca::what() const noexcept{return msj.c_str();}

ExcepcionDatosInvalidos::ExcepcionDatosInvalidos(string msj):msj(msj){}
const char* ExcepcionDatosInvalidos::what() const noexcept{return msj.c_str();}

ExcepcionDescuadreCaja::ExcepcionDescuadreCaja(string msj):msj(msj){}
const char* ExcepcionDescuadreCaja::what() const noexcept{return msj.c_str();}