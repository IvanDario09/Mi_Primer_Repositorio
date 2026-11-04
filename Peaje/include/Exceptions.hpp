#pragma once
#include <exception>
#include <string>
using namespace std;

class ExcepcionPlaca : public exception{
    private:
    string msj;
    public:
    ExcepcionPlaca(string);
    char* what() const noexcept override;
};