/*
 * Curso: Desafío de programación: C++
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <string>

using namespace std;

class Direccion {

public:

    string getCodigoPostal() const;
    string getCalle() const;
    int getNumero() const;
    
    string getDireccionCompleta() const;

private:
    string calle, codigoPostal;
    int numero;
};

class Persona {

public:
    
    Persona(string nombre, Direccion direccion);
    string getNombre() const;
    string getDireccion() const;

private:
    string nombre;
    Direccion direccion;
};

int main(){

    return 0;
}

string Direccion::getCodigoPostal() const{
    return codigoPostal;
}

string Direccion::getCalle() const{
    return calle;
}

int Direccion::getNumero() const{
    return numero;
}

string Persona::getNombre() const{
    return nombre;
}

string Direccion::getDireccionCompleta() const {
    return calle + " " + to_string(numero) + ", " + codigoPostal;
}

Persona::Persona(string nombre, Direccion direccion){
    this->nombre = nombre;
    this->direccion = direccion;
}

string Persona::getDireccion() const {
    return direccion.getDireccionCompleta();
}