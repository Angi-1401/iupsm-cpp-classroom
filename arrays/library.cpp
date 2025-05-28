#include <iostream>
#include <string>

int main(int argc, char *argv[]) {
    std::string books[5];

    for (int i = 0; i < 5; i++) {
        std::cout << "Book " << i + 1 << ": ";
        std::cin >> books[i];
    }

    for (int i = 0; i < 5; i++) {
        std::cout << books[i] << std::endl;
    }

    return 0;
}