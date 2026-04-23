#include <iostream>
#include <windows.h>
#include <string>
#include "Counter.h"


int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
 
    std::string answer;
    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    std::cin >> answer;

    Counter counter;

    if (answer == "да") {
        int init_val;
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> init_val;
        counter = Counter(init_val);
    }

    char command;
    while (true) {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> command;

        switch (command) {
        case '+':
            counter.increment();
            break;
        case '-':
            counter.decrement();
            break;
        case '=':
            std::cout << counter.get_value() << std::endl;
            break;
        case 'x':
            std::cout << "До свидания!" << std::endl;
            return 0;
        default:
            std::cout << "Неверная команда. Попробуйте снова." << std::endl;
        }
    }

    return 0;

}