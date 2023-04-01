/*
 * Curso: Desafío de programación: C++
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

class CuentaBancaria {

private:
    double saldo;

public:
    void depositar(double cantidad){
        saldo += cantidad;
    }

    void retirar(double cantidad){
        saldo -= cantidad;
    }

    double obtenerSaldo() const {
        return saldo;
    }
};

int main(){

    return 0;
}