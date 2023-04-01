/*
 * Curso: Desafío de programación: C++
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <iostream>
#include <string>

using namespace std;

class Certificado {

public:
    Certificado(string nombre, string primerApellido, string curso,
    int dia, int anio, int horas, int minutos, int horasDuracionCurso, int minutosDuracionCurso,
    string mes, string husoHorario);

    /* Suponemos la existencia de un método que imprime por pantalla
     * un certificado como el que obtendrás al finalizar este curso
     * de LinkedIn Learning
     * 
     * void generarDocumento() const; */

private:
    string nombre_, primerApellido_, curso_, mes_, husoHorario_;
    int dia_, anio_, horas_, minutos_, horasDuracionCurso_, minutosDuracionCurso_;
};

int main(){

    Certificado c("Eliezer", "López", "C++: Trucos y Consejos", 21,  2023, 7, 7, 1, 17, "mar", "UTC");
    // c.generarDocumento();

    return 0;
}

Certificado::Certificado(string nombre, string primerApellido, string curso,
    int dia, int anio, int horas, int minutos, int horasDuracionCurso, int minutosDuracionCurso,
    string mes, string husoHorario){

    nombre_ = nombre;
    primerApellido_ = primerApellido;
    curso_ = curso;
    dia_ = dia;
    anio_ = anio;
    horas_ = horas;
    minutos_ = minutos;
    horasDuracionCurso_ = horasDuracionCurso;
    minutosDuracionCurso_ = minutosDuracionCurso;
    mes_ = mes;
    husoHorario_ = husoHorario;
}