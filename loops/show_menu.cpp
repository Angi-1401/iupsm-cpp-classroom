#include <cstdlib>
#include <iostream>
#include <thread>

int main(int argc, char *argv[]) {
    int opt;
    bool valid = false;

    do {
        std::cout << "Menu" << std::endl;
        std::cout << "1. Cesar salad" << std::endl;
        std::cout << "2. Pasta Carbonara" << std::endl;
        std::cout << "3. Steak with champignons sause and vegetables" << std::endl;
        std::cout << "4. Margherita pizza (12 pulg.)" << std::endl;
        std::cout << "5. Chicken hamburger with cheese and fries" << std::endl;

        std::cout << "Select the No. of your order:: ";
        std::cin >> opt;

        if (std::cin.fail()) {
            std::cout << "Invalid option. Please, try again" << std::endl;
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            std::this_thread::sleep_for(std::chrono::seconds(2));
            system("cls");
        } else if (opt > 5 || opt < 1) {
            std::cout << "Invalid option. Please, try again" << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(2));
            system("cls");
        } else {
            valid = true;
        }

    } while (!valid);

    std::cout << "I'll take your order... It will be ready in a moment" << std::endl;
    std::cout << "You can study some code development in the mean time uwu" << std::endl;
    return 0;
}