#include <iostream>
#include <windows.h>
#include <string>
#include "Triangle.h"
#include "RightTriangle.h"
#include "IsoscelesTriangle.h"
#include "EquilateralTriangle.h"
#include "Quadrangle.h"
#include "Rectangles.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhombus.h"

void print_info(Figure* fig) {
    fig->print_info();
}

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
 
    Triangle triangle(10, 20, 30, 50, 60, 70);
    RightTriangle rightTriangle(10, 20, 30, 50, 60);
    IsoscelesTriangle isoscelesTriangle(10, 20, 50, 60);
    EquilateralTriangle equilateralTriangle(30);
    Quadrangle quadrangle(10, 20, 30, 40, 50, 60, 70, 80);
    Rectangles rectangle(10, 20);
    Square square(20);
    Parallelogram parallelogram(20, 30, 30, 40);
    Rhombus rhombus(30, 30, 40);

    print_info(&triangle);
    std::cout << std::endl;
    print_info(&rightTriangle);
    std::cout << std::endl;
    print_info(&isoscelesTriangle);
    std::cout << std::endl;
    print_info(&equilateralTriangle);
    std::cout << std::endl;
    print_info(&quadrangle);
    std::cout << std::endl;
    print_info(&rectangle);
    std::cout << std::endl;
    print_info(&square);
    std::cout << std::endl;
    print_info(&parallelogram);
    std::cout << std::endl;
    print_info(&rhombus);

    return 0;

}