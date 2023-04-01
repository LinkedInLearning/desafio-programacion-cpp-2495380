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

    void generarDocumento() const;

private:
    string nombre_, primerApellido_, curso_;

    int dia_, anio_, horas_, minutos_, horasDuracionCurso_, minutosDuracionCurso_;
    string mes_, husoHorario_;
};

int main(){

    Certificado c("Eliezer", "López", "C++: Trucos y Consejos",
        21, 2023, 7, 7, 1, 17, "mar", "UTC");

    c.generarDocumento();

    return 0;
}

void Certificado::generarDocumento() const{

    string nombreCompleto = nombre_ + " " + primerApellido_;
    string diaConFormato = (dia_ > 9) ? std::to_string(dia_) : ("0" + std::to_string(dia_));
    string fecha = mes_ + " " + diaConFormato + ", " + std::to_string(anio_);

    string horaConFormato = (horas_ > 9) ? std::to_string(horas_) : ("0" + std::to_string(horas_));
    string minutosConFormato = (minutos_ > 9) ? std::to_string(minutos_) : ("0" + std::to_string(minutos_));
    string minutosDuracionCursoConFormato = (minutosDuracionCurso_ > 9) ? std::to_string(minutosDuracionCurso_) : ("0" + std::to_string(minutosDuracionCurso_));
    
    cout << endl;
    cout << "------------------------------------------------------------------" << endl;
    cout << "" << endl;
    cout << "  LinkedIn Learning" << endl;
    cout << "  Certificado de finalización" << endl;
    cout << "  ¡Felicidades, " << nombreCompleto << "!" << endl;
    cout << ""<< endl;
    cout << "  "<< curso_ << endl;
    cout << "  Curso completado el " << fecha << " a las " << horaConFormato << ":" << minutosConFormato << " " << husoHorario_ << " · " << horasDuracionCurso_ << " h " << minutosDuracionCursoConFormato << " min" << endl;
    cout << ""<< endl;
    cout << "  Seguir aprendiendo te ha permitido ampliar horizontes,"<< endl;
    cout << "  perfeccionar tus aptitudes y mejorar"<< endl;
    cout << "  tus posibilidades profesionales."<< endl;
    cout << "  " << endl;
    cout << "------------------------------------------------------------------" << endl;
}