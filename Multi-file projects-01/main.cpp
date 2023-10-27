#include <iostream>
#include<Windows.h>
#include "mathFunctions.h"

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double num1, num2;
    int choice;

    std::cout << "Введите первое число: ";
    std::cin >> num1;

    std::cout << "Введите второе число: ";
    std::cin >> num2;

    std::cout << "Выберите операцию (1 - сложение, 2 - вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень, 6 - выход из программы): ";
    std::cin >> choice;

    double result;
    switch (choice) {
    case 1:
        result = addition(num1, num2);
        std::cout << "Результат: " << result << std::endl;
        break;
    case 2:
        result = subtraction(num1, num2);
        std::cout << "Результат: " << result << std::endl;
        break;
    case 3:
        result = multiplication(num1, num2);
        std::cout << "Результат: " << result << std::endl;
        break;
    case 4:
        result = division(num1, num2);
        std::cout << "Результат: " << result << std::endl;
        break;
    case 5:
        result = exponentiation(num1, num2);
        std::cout << "Результат: " << result << std::endl;
        break;
    case 6:
        std::cout << "Выход из программы." << std::endl;
        break;
    default:
        std::cout << "Некорректный выбор." << std::endl;
        break;
    }

    return 0;
}
