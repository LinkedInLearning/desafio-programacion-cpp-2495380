/*
 * Curso: Desafío de programación: C++
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    vector<int> vectorDeEnteros;
    int valorIntroducidoPorElUsuario;
    
    cout << "" << endl;
    cout << "--> ¡Te doy la bienvenida a esta nueva lección de LinkedIn Learning! <--" << endl;
    cout << "" << endl;
    cout << "Por favor, introduce una serie de enteros. Escribe -1 para finalizar: ";
    
    cin >> valorIntroducidoPorElUsuario;

    while (valorIntroducidoPorElUsuario != -1) {
        vectorDeEnteros.push_back(valorIntroducidoPorElUsuario);
        cin >> valorIntroducidoPorElUsuario;
    }

    cout << "" << endl;
    cout << "- El primer elemento del vector es: " << vectorDeEnteros.front() << endl;
    cout << "- El último elemento del vector es: " << vectorDeEnteros.back() << endl;
    cout << "" << endl;

    cout << "Por favor, introduce el la posición del elemento que te gustaría consultar: ";
    cin >> valorIntroducidoPorElUsuario;
    cout << "" << endl;

    try{
        cout << "- El elemento localizado en la posición " << valorIntroducidoPorElUsuario << " es: " << vectorDeEnteros.at(valorIntroducidoPorElUsuario) << endl;
    }
    catch(const std::out_of_range& e){
        cout << "" << endl;
        cout << "¡Desconocido! Estás intentando acceder a un índice fuera de rango" << endl;
    }

    cout << "" << endl;
    cout << "" << endl;

    return 0;
}