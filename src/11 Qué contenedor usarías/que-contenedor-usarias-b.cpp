/*
 * Curso: Desafío de programación: C++
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <string>
#include <iostream>
#include <vector>
#include <list>

using namespace std;

class Coche {

public:
    void setMatricula(string matricula);
    void setMarca(string marca);
    void setModelo(string modelo);

    string getMatricula() const;
    string getMarca() const;
    string getModelo() const;

private:
    string matricula_, marca_, modelo_;
};

int main(){

    cout << "Colección de coches: " << endl;

    vector<Coche *> coleccion;

    for(size_t i=0; i<coleccion.size(); i++){
        cout << coleccion[i]->getMarca() << endl;
        cout << coleccion[i]->getModelo() << endl;
    }

    return 0;
}

void Coche::setMatricula(string matricula){
    matricula_ = matricula;
}

void Coche::setMarca(string marca){
    marca_ = marca;
}

void Coche::setModelo(string modelo){
    modelo_ = modelo;
}

string Coche::getMatricula() const {return matricula_;}
string Coche::getMarca() const {return marca_;}
string Coche::getModelo() const {return modelo_;}