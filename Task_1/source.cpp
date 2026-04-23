#include <iostream>
#include <windows.h>
#include <string>
#include "math_operations.h"


int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
 
    double a, b;
    int choice;

    std::cout << "Введите первое число: ";
    std::cin >> a;
    std::cout << "Введите второе число: ";
    std::cin >> b;
    std::cout << "Выберите операцию (1 - сложение, 2 - вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
    std::cin >> choice;

    double result;
    switch (choice) {
    case 1:
        result = add(a, b);
        std::cout << a << " + " << b << " = " << result << std::endl;
        break;
    case 2:
        result = subtract(a, b);
        std::cout << a << " - " << b << " = " << result << std::endl;
        break;
    case 3:
        result = multiply(a, b);
        std::cout << a << " * " << b << " = " << result << std::endl;
        break;
    case 4:
        result = divide(a, b);
        std::cout << a << " / " << b << " = " << result << std::endl;
        break;
    case 5:
        result = power(a, static_cast<int>(b));
        std::cout << a << " в степени " << static_cast<int>(b) << " = " << result << std::endl;
        break;
    default:
        std::cout << "Неверный выбор операции!" << std::endl;
        return 1;
    }

    return 0;

}