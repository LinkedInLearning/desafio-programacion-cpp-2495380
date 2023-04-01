/*
 * Curso: Desafío de programación: C++
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <iostream>
#include <ctime>
#include <random>

using namespace std;

class NumeroAleatorio{

private:
    mt19937 generador;
public:

    NumeroAleatorio(){
        generador.seed(time(NULL));
    }

    int enteroAleatorio(int min, int max){
        uniform_int_distribution<mt19937::result_type> distribucion(min, max);
        return distribucion(generador);
    }
    double realAleatorio(double min, double max){
        uniform_real_distribution<double> distribucion(min, max);
        return distribucion(generador);
    }
};

int main(){

    NumeroAleatorio aleatorio;

    cout << "Número entero aleatorio entre 1 y 10: " << aleatorio.enteroAleatorio(1,10) << endl;
    cout << "Número real aleatorio entre 0.5 y 1.5: " << aleatorio.realAleatorio(0.5,1.5) << endl;

    return 0;
}