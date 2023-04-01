/*
 * Curso: Desafío de programación: C++
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include "LineaDeMontaje.hpp"

bool LineaDeMontaje::enFuncionamiento() const{
    return estado_;
}

void LineaDeMontaje::ponerEnFuncionamiento(){
    if(operario_.estaDisponible()) estado_ = true;
}

void LineaDeMontaje::detener(){
    estado_ = false;
}