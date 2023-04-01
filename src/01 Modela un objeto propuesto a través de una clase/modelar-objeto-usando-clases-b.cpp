/*
 * Curso: Desafío de programación: C++
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <string>

using namespace std;

class Neumatico{

public:

    // 215/55 R16 94V
    enum Estacion {VERANO, INVIERNO, TODAS_LAS_ESTACIONES};

    Neumatico(string numeracion);
    void setEstacion(Neumatico::Estacion estacion);
    
    Neumatico::Estacion getEstacion() const;
    string getNumeracion() const;

private:

    Neumatico::Estacion estacion_;
    // ...
    string numeracion_;
};

int main(){

    return 0;
}

void Neumatico::setEstacion(Neumatico::Estacion estacion){
    estacion_ = estacion;
}

Neumatico::Estacion Neumatico::getEstacion() const{
    return estacion_;
}

Neumatico::Neumatico(string numeracion){
    numeracion_ = numeracion;
}

string Neumatico::getNumeracion() const{
    return numeracion_;
}