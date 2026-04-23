#include "Quadrangle.h"
#include <iostream>

Quadrangle::Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D)
    : a(a), b(b), c(c), d(d), A(A), B(B), C(C), D(D) {
    name = "Четырёхугольник";
}

void Quadrangle::print_info() const {
    std::cout << name << ":\n";
    std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << "\n";
    std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << "\n";
}