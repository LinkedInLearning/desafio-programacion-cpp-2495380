/*
 * Curso: Desafío de programación: C++
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <iostream>
#include <string>

using namespace std;

class Freelance {

public:
    Freelance(double precioHora) : precioHora_(precioHora), horasDeTrabajoAlDia_(8), 
        diasDeTrabajoALaSemana_(5), semanasDeTrabajoAlMes_(4){
    };
    
    double calcularImporteFacturaMensual() const;

private:
    double precioHora_;
    int horasDeTrabajoAlDia_, diasDeTrabajoALaSemana_, semanasDeTrabajoAlMes_;
};

int main(){
    
    double precioHora;

    cout << "" << endl;
    cout << "---------------------------------------" << endl;
    cout << "" << endl;

    cout << "Hola Eliezer, ¿cuál es tu tarifa horaria en euros?: ";
    cin >> precioHora;
    
    Freelance softwareDeveloper(precioHora);

    cout << "" << endl;
    cout << "Este mes deberías generar una factura de: " << softwareDeveloper.calcularImporteFacturaMensual() << " €" << endl;

    cout << "" << endl;
    cout << "---------------------------------------" << endl;
    cout << "" << endl;

    return 0;
}

double Freelance::calcularImporteFacturaMensual() const{
    return precioHora_*horasDeTrabajoAlDia_*diasDeTrabajoALaSemana_;
}