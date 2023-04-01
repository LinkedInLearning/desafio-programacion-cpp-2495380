/*
 * Curso: Desafío de programación: C++
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <string>

using namespace std;

class Empleado {

public:

  Empleado(string nombre, string primerApellido, double salarioMensual)
      : nombre_(nombre), primerApellido_(primerApellido), salarioMensual_(salarioMensual) {}

  string getNombre() const { return nombre_; }

  string getPrimerApellido() const { return primerApellido_; }

  double getSalarioMensual() const { return salarioMensual_; }

private:
  string nombre_, primerApellido_;
  double salarioMensual_;
};

class Supervisor : public Empleado{

public:
    Supervisor(string nombre, string primerApellido, double salarioMensual,
    double retribucionMensual, bool tomaDecisionesComplejas) : Empleado(nombre,primerApellido,salarioMensual), 
    retribucionMensual_(retribucionMensual), tomaDecisionesComplejas_(tomaDecisionesComplejas){}
    
    double getRetribucionMensual() const { return retribucionMensual_;}
    bool getTomaDecisionesComplejas() const {return tomaDecisionesComplejas_;}
    
private:
    double retribucionMensual_;
    bool tomaDecisionesComplejas_;
};


int main(){

    return 0;
}