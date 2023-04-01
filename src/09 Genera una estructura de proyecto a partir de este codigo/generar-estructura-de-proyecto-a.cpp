/*
 * Curso: Desafío de programación: C++
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

class Operario {

public:
    Operario(int identificador, bool disponible);
    bool estaDisponible() const;

private:
    int identificador_;
    bool disponible_;
};

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

int main(){

    Operario o(1,true);
    LineaDeMontaje p(o);

    return 0;
}

Operario::Operario(int identificador, bool disponible){
    identificador_ = identificador;
    disponible_ = disponible;
}

bool Operario::estaDisponible() const {
    return disponible_;
}

bool LineaDeMontaje::enFuncionamiento() const{
    return estado_;
}

void LineaDeMontaje::ponerEnFuncionamiento(){
    if(operario_.estaDisponible()) estado_ = true;
}

void LineaDeMontaje::detener(){
    estado_ = false;
}