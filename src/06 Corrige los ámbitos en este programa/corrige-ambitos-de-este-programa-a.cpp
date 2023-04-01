/*
 * Curso: Desafío de programación: C++
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <iostream>
#include <string>

using namespace std;

int dia, anio, horas, minutos, horasDuracionCurso, minutosDuracionCurso;
string mes, husoHorario;

class Certificado {

public:

    string nombre, primerApellido, curso;
    void generarDocumento() const;

private:
    
};

int main(){

    return 0;
}

void Certificado::generarDocumento() const{

    string nombreCompleto = nombre + " " + primerApellido;
    string diaConFormato = (dia > 9) ? std::to_string(dia) : ("0" + std::to_string(dia));
    string fecha = mes + " " + diaConFormato + ", " + std::to_string(anio);

    string horaConFormato = (horas > 9) ? std::to_string(horas) : ("0" + std::to_string(horas));
    string minutosConFormato = (minutos > 9) ? std::to_string(minutos) : ("0" + std::to_string(minutos));
    string minutosDuracionCursoConFormato = (minutosDuracionCurso > 9) ? std::to_string(minutosDuracionCurso) : ("0" + std::to_string(minutosDuracionCurso));
    
    cout << endl;
    cout << "------------------------------------------------------------------" << endl;
    cout << "" << endl;
    cout << "  LinkedIn Learning" << endl;
    cout << "  Certificado de finalización" << endl;
    cout << "  ¡Felicidades, " << nombreCompleto << "!" << endl;
    cout << ""<< endl;
    cout << "  "<< curso << endl;
    cout << "  Curso completado el " << fecha << " a las " << horaConFormato << ":" << minutosConFormato << " " << husoHorario << " · " << horasDuracionCurso << " h " << minutosDuracionCursoConFormato << " min" << endl;
    cout << ""<< endl;
    cout << "  Seguir aprendiendo te ha permitido ampliar horizontes,"<< endl;
    cout << "  perfeccionar tus aptitudes y mejorar"<< endl;
    cout << "  tus posibilidades profesionales."<< endl;
    cout << "  " << endl;
    cout << "------------------------------------------------------------------" << endl;
}