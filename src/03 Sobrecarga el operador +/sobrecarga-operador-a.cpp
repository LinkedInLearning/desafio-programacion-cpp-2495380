/*
 * Curso: Desafío de programación: C++
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

class Vector2D {

public:

    Vector2D(double x, double y) : x_(x), y_(y) {}
    
    double getX() const {return x_;}
    double getY() const {return y_;}

private:
    
    double x_, y_;
};

int main(){

    Vector2D vector1(1,2);
    Vector2D vector2(3,4);

    Vector2D vectorSuma = vector1 + vector2;

    return 0;
}