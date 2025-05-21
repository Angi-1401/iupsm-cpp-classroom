#include <iostream>

int main() {
    float package = 0;
    int answer = 0;

    std::cout << "Enter the weight of the package in kg: ";
    std::cin >> package;

    if (package <= 0 || package > 10) {
        std::cout << "We cannot deliver this package." << std::endl;
        return 1;
    } else {
        std::cout << "Select the shipping destination: \n1. National\n2. International\n";
        std::cin >> answer;

        if (answer == 1) {
            if (package <= 2) {
                std::cout << "Shipping cost: $5.00" << std::endl;
            } else if (package <= 5) {
                std::cout << "Shipping cost: $10.00" << std::endl;
            } else if (package <= 10) {
                std::cout << "Shipping cost: $15.00" << std::endl;
            }
        } else if (answer == 2) {
            if (package <= 2) {
                std::cout << "Shipping cost: $10.00" << std::endl;
            } else if (package <= 5) {
                std::cout << "Shipping cost: $20.00" << std::endl;
            } else if (package <= 10) {
                std::cout << "Shipping cost: $30.00" << std::endl;
            }
        } else {
            std::cout << "Invalid destination selection." << std::endl;
            return 1;
        }
    }

    return 0;
}