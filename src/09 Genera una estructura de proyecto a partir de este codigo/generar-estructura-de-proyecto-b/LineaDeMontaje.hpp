/*
 * Curso: Desafío de programación: C++
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#ifndef LINEADEMONTAJE_HPP
#define LINEADEMONTAJE_HPP

#include "Operario.hpp"

class LineaDeMontaje{

public:
    LineaDeMontaje(const Operario& operario) : operario_(operario), estado_(false) {}
    bool enFuncionamiento() const;
    void ponerEnFuncionamiento();
    void detener();
private:
    const Operario &operario_;
    bool estado_;
};

#endif