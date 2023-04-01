/*
 * Curso: Desafío de programación: C++
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <sstream>
#include <string>

using namespace std;

class Neumatico{

public:

    // 215/55 R16 94V
    enum Estacion {VERANO, INVIERNO, TODAS_LAS_ESTACIONES};

    Neumatico(string numeracion);
    void setEstacion(Neumatico::Estacion estacion);
    
    Neumatico::Estacion getEstacion() const;
    string getNumeracion() const;

    // Métodos observadores
    int getAnchoEnMilimetros() const;
    int getRelacionDeAspectoEnPorcentaje() const;
    int getDiametroLlantaEnPulgadas() const;
    int getIndiceDeCarga() const;
    char getTipoDeConstruccion() const;
    char getVelocidadMaxima() const;

private:

    Neumatico::Estacion estacion_;
    // ...
    string numeracion_;

    int anchoEnMilimetros, relacionDeAspectoEnPorcentaje, diametroLlantaEnPulgadas, indiceDeCarga;
    char tipoDeConstruccion, velocidadMaxima;

    void obtenerValores();
};

int main(){

    return 0;
}

void Neumatico::setEstacion(Neumatico::Estacion estacion){
    estacion_ = estacion;
}

Neumatico::Estacion Neumatico::getEstacion() const{
    return estacion_;
}

Neumatico::Neumatico(string numeracion){
    numeracion_ = numeracion;
    obtenerValores();
}

string Neumatico::getNumeracion() const{
    return numeracion_;
}

void Neumatico::obtenerValores() {

    // Creamos un flujo de entrada de cadena (istringstream) para procesar la numeración del neumático
    istringstream flujoDeEntrada(numeracion_);

    // Extraemos los valores de la numeración del neumático y los almacenamos en los atributos privados de la clase
    flujoDeEntrada >> anchoEnMilimetros;
    flujoDeEntrada.ignore(); // Ignorar el caracter '/' en la entrada
    flujoDeEntrada >> relacionDeAspectoEnPorcentaje >> tipoDeConstruccion >> diametroLlantaEnPulgadas >> indiceDeCarga >> velocidadMaxima;

    // Los atributos ahora contienen la información extraída del código del neumático
}

int Neumatico::getAnchoEnMilimetros() const {
    return anchoEnMilimetros;
}

int Neumatico::getRelacionDeAspectoEnPorcentaje() const {
    return relacionDeAspectoEnPorcentaje;
}

int Neumatico::getDiametroLlantaEnPulgadas() const {
    return diametroLlantaEnPulgadas;
}

int Neumatico::getIndiceDeCarga() const {
    return indiceDeCarga;
}

char Neumatico::getTipoDeConstruccion() const {
    return tipoDeConstruccion;
}

char Neumatico::getVelocidadMaxima() const {
    return velocidadMaxima;
}