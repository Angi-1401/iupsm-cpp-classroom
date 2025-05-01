#include <iostream>

int main(int argc, char *argv[]) {
    int num;

    std::cout << "Enter a number: ";
    std::cin >> num;

    if (num > 0) {
        std::cout << "The number is positive" << std::endl;
    } else if (num < 0) {
        std::cout << "The number is negative" << std::endl;
    } else {
        std::cout << "The number is cero" << std::endl;
    }
}