#include <iostream>

int main(int argc, char *argv[]) {
    float num1, num2, result;
    char operation;

    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;

    std::cout << "Enter operation (+, -, *, /): ";
    std::cin >> operation;

    if (operation == '+') {
        result = num1 + num2;
    } else if (operation == '-') {
        result = num1 - num2;
    } else if (operation == '*') {
        result = num1 * num2;
    } else if (operation == '/') {
        if (num2 != 0) {
            result = num1 / num2;
        } else {
            std::cout << "Error: Division by zero!" << std::endl;
            return 1;  // Exit with error code
        }

    } else {
        std::cout << "Error: Invalid operation!" << std::endl;
        return 1;  // Exit with error code
    }

    std::cout << "Result: " << result << std::endl;
    std::cout << "Thank you for using the calculator!" << std::endl;
    return 0;
}