/*
 * Curso: Desafío de programación: C++
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <iostream>
#include <filesystem>
#include <string>

using namespace std;
namespace fs = filesystem;

int main(){
    
    fs::path directorioActual("/Users/LinkedIn/Desktop/EliezerLopez");
    fs::directory_iterator iterador(directorioActual);

    string nombreArchivo = iterador->path().filename();
    string extensionArchivo = iterador->path().extension();
    
    cout << "El nombre del archivo es: " << nombreArchivo << endl;
    cout << "La extensión del archivo es: " << extensionArchivo << endl;
    
    return 0;
}