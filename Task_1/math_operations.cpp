#include "math_operations.h"
#include <iostream> // для вывода ошибки (опционально)

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b == 0) {
        std::cerr << "Ошибка: деление на ноль!" << std::endl;
        return 0; // возвращаем 0, но можно использовать другие способы обработки
    }
    return a / b;
}

double power(double base, int exponent) {
    if (exponent == 0) return 1.0;
    if (exponent < 0) {
        // для отрицательной степени возвращаем 1 / (base^|exponent|)
        double result = 1.0;
        for (int i = 0; i < -exponent; ++i) {
            result *= base;
        }
        return 1.0 / result;
    }
    double result = 1.0;
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }
    return result;
}