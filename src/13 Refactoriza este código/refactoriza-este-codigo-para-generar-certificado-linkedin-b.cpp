/*
 * Curso: Desafío de programación: C++
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <iostream>
#include <string>

using namespace std;

class Persona {
public:
    Persona (string nombre, string primerApellido) :
    nombre_(nombre), primerApellido_(primerApellido){};
private:
    string nombre_, primerApellido_;
};

class Curso {
public:
    Curso(string titulo, int horasDuracionCurso, int minutosDuracionCurso) :
    titulo_(titulo), horasDuracionCurso_(horasDuracionCurso), minutosDuracionCurso_(minutosDuracionCurso){};
private:
    string titulo_;
    int horasDuracionCurso_, minutosDuracionCurso_;
};

class Fecha {
public:
    Fecha(int dia, string mes, int anio, int horas, int minutos, string husoHorario) :
    dia_(dia), mes_(mes), anio_(anio), horas_(horas), minutos_(minutos), husoHorario_(husoHorario){};
private:
    string mes_, husoHorario_;
    int dia_, anio_, horas_, minutos_;
};

class Certificado {

public:
    Certificado(Persona p, Curso c, Fecha f) : 
    persona_(p), curso_(c), fecha_(f){};

    /* Suponemos la existencia de un método que imprime por pantalla
     * un certificado como el que obtendrás al finalizar este curso
     * de LinkedIn Learning
     * 
     * void generarDocumento() const; */

private:
    Persona persona_;
    Curso curso_;
    Fecha fecha_;
};

int main(){

    Persona persona("Eliezer", "López");
    Curso curso("C++: Trucos y Consejos", 1, 17);
    Fecha fecha(21, "mar", 2023, 7, 7, "UTC");
   
    Certificado c(persona, curso, fecha);
    // c.generarDocumento();

    return 0;
}