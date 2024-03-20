#include "calculator.h"

Calculation::Calculation(char op, double n1, double n2, double res) 
    : operation(op), num1(n1), num2(n2), result(res) {}

std::ostream& operator<<(std::ostream& os, const Calculation& calc) {
    os << calc.num1 << " " << calc.operation << " " << calc.num2 << " = " << calc.result;
    return os;
}