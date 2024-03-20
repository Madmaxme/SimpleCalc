#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include "calculator.h"

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <filename>" << std::endl;
        return 1;
    }

    Calculator calc(argv[1]);

    while (true) {
        std::cout << "Enter an arithmetic operation (+, -, *, /) or 'q' to quit: ";
        char operation;
        std::cin >> operation;

        if (operation == 'q') break;

        double num1, num2;
        std::cout << "Enter two numbers: ";
        std::cin >> num1 >> num2;

        calc.performCalculation(operation, num1, num2);
    }

    std::cout << "Calculation History:" << std::endl;
    calc.displayHistory();
    std::cout << "Results have been saved to " << argv[1] << ". Exiting the calculator." << std::endl;

    return 0;
}
