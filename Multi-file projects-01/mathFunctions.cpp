#include "mathFunctions.h"

double addition(double a, double b) {
    return a + b;
}

double subtraction(double a, double b) {
    return a - b;
}

double multiplication(double a, double b) {
    return a * b;
}

double division(double a, double b) {
    return a / b;
}

double exponentiation(double a, double b) {
    double result = 1;
    for (int i = 0; i < b; i++) {
        result *= a;
    }
    return result;
}
