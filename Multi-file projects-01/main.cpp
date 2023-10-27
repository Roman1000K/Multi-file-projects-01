#include <iostream>
#include<Windows.h>
#include "mathFunctions.h"

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double num1, num2;
    int choice;

    std::cout << "������� ������ �����: ";
    std::cin >> num1;

    std::cout << "������� ������ �����: ";
    std::cin >> num2;

    std::cout << "�������� �������� (1 - ��������, 2 - ���������, 3 - ���������, 4 - �������, 5 - ���������� � �������, 6 - ����� �� ���������): ";
    std::cin >> choice;

    double result;
    switch (choice) {
    case 1:
        result = addition(num1, num2);
        std::cout << "���������: " << result << std::endl;
        break;
    case 2:
        result = subtraction(num1, num2);
        std::cout << "���������: " << result << std::endl;
        break;
    case 3:
        result = multiplication(num1, num2);
        std::cout << "���������: " << result << std::endl;
        break;
    case 4:
        result = division(num1, num2);
        std::cout << "���������: " << result << std::endl;
        break;
    case 5:
        result = exponentiation(num1, num2);
        std::cout << "���������: " << result << std::endl;
        break;
    case 6:
        std::cout << "����� �� ���������." << std::endl;
        break;
    default:
        std::cout << "������������ �����." << std::endl;
        break;
    }

    return 0;
}
