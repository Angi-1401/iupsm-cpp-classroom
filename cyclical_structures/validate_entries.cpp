#include <iostream>

int main(int argc, char *argv[]) {
    int n;
    bool valid = false;

    while (!valid) {
        std::cout << "Insert an integer number: ";
        std::cin >> n;

        if (std::cin.fail()) {
            std::cout << "There was an error reading the number" << std::endl;
            std::cout << "Please, try again" << std::endl;

            std::cin.clear();
            std::cin.ignore(1000, '\n');
        } else {
            valid = true;
        }
    }

    std::cout << "The number is: " << n << std::endl;
    std::cout << "Thanks for following the instructions :D" << std::endl;

    return 0;
}