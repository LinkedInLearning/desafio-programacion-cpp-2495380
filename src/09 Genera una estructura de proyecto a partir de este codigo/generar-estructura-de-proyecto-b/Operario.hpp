/*
 * Curso: Desafío de programación: C++
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#ifndef OPERARIO_HPP
#define OPERARIO_HPP

class Operario {

public:
    Operario(int identificador, bool disponible);
    bool estaDisponible() const;

private:
    int identificador_;
    bool disponible_;
};

#endif