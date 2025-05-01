#include <iostream>

int main(int argc, char *argv[]) {
    int num;

    std::cout << "Enter a number: ";
    std::cin >> num;

    if (num % 2 == 0) {
        std::cout << "The number is even" << std::endl;
    } else {
        std::cout << "The number is odd" << std::endl;
    }
}
