/*
 * Curso: Desafío de programación: C++
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <string>
#include <regex>

using namespace std;

bool emailCorrecto(string correoElectronico){

    bool estructuraCorrecta = false;
    
    regex patron("^[a-zA-Z0-9_.+-]+@[a-zA-Z0-9-]+\\.[a-zA-Z0-9-]+$");
    
    if(regex_match(correoElectronico, patron)) estructuraCorrecta = true;
    
    return estructuraCorrecta;
}

int main(){

    return 0;
}