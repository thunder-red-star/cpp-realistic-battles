#include "main.h"
#include <iostream>
#include <cmath>

int main() {
    std::cout << "first number:" << std::endl;
    std::int32_t number1;
    std::cin >> number1;
    std::cout << "operation:" << std::endl;
    std::string op;
    std::cin >> op;
    std::cout << "second number:" << std::endl;
    std::int32_t number2;
    std::cin >> number2;
    if (op == "+" || op == "add" || op == "plus") {
        std::cout << (number1 + number2) << std::endl;
    } else if (op == "-" || op == "subtract" || op == "minus") {
        std::cout << (number1 - number2) << std::endl;
    } else if (op == "*" || op == "times" || op == "multiply") {
        std::cout << (number1 * number2) << std::endl;
    } else if (op == "/" || op == "divide") {
        std::cout << (number1 / number2) << std::endl;
    } else if (op == "**" || op == "^" || op == "power") {
        std::cout << pow(number1, number2) << std::endl;
    } else {
        std::cout << "invalid operation" << std::endl;
    }
    std::cout << "\nkeep in mind this is integer operation and may not be accurate past the decimal point!" << std::endl;
    return 0;
}