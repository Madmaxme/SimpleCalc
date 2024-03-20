#include "calculator.h"
#include <fstream>

Calculator::Calculator(const std::string& fName) : fileName(fName) {}

Calculator::~Calculator() {
    std::ofstream file(fileName);
    for (const auto& calc : history) {
        file << calc << std::endl;
    }
}

void Calculator::performCalculation(char operation, double num1, double num2) {
    double result = calculate(operation, num1, num2);
    std::cout << "Result: " << result << std::endl;
    history.push_back(Calculation(operation, num1, num2, result));
}

void Calculator::displayHistory() {
    for (const auto& calc : history) {
        std::cout << calc << std::endl;
    }
}

double Calculator::calculate(char operation, double num1, double num2) {
    switch (operation) {
        case '+': return num1 + num2;
        case '-': return num1 - num2;
        case '*': return num1 * num2;
        case '/': return num1 / num2;
        default:  return 0.0;
    }
}
