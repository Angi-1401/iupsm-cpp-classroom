#include <iostream>
#include <string>

int main(int argc, char *argv[]) {
    std::string password, password_1;
    int tries = 0;

    password = "Potato123*";

    do {
        std::cout << "Ingrese la contraseña: >_ ";
        std::cin >> password_1;

        if (password_1 == password) {
            std::cout << "Password is correct" << std::endl;
        } else {
            std::cout << "Password is incorrect" << std::endl;
            std::cout << "Please, try again" << std::endl;
            std::cout << "You have used " << tries + 1 << " of 2 tries." << std::endl;
            tries++;
        }
    } while (tries < 2 && password_1 != password);

    if (tries >= 2) {
        std::cout << "Access denied" << std::endl;
        return 0;
    } else {
        std::cout << "Access granted" << std::endl;
    }

    return 0;
};