#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <iostream>
#include <vector>
#include <string>

// Forward declaration of Calculation for use in Calculator
class Calculation;

class Calculation {
private:
    char operation;
    double num1, num2, result;

public:
    Calculation(char op, double n1, double n2, double res);

    friend std::ostream& operator<<(std::ostream& os, const Calculation& calc);
};

class Calculator {
private:
    std::vector<Calculation> history;
    std::string fileName;

    double calculate(char operation, double num1, double num2);

public:
    Calculator(const std::string& fName);
    ~Calculator();
    void performCalculation(char operation, double num1, double num2);
    void displayHistory();
};

#endif 
