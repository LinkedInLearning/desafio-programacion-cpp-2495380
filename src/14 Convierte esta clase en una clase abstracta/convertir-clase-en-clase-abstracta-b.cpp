/*
 * Curso: Desafío de programación: C++
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <iostream>

using namespace std;

class Empleado {
public:

    Empleado(string nombre, string primerApellido, double salario) : nombre_(nombre), primerApellido_(primerApellido), salario_(salario) {}
    
    string getNombre() const { return nombre_; }    
    string getPrimerApellido() const { return primerApellido_; }
    virtual double getSalario() const = 0;

private:
    string nombre_, primerApellido_;

protected:
    double salario_;
};

int main(){

    return 0;
}