#include <iostream>

int main(int argc, char *argv[]) {
    int n, i;

    std::cout << "Insert and integer number: ";
    std::cin >> n;

    i = n;
    while (i <= n) {
        std::cout << "Regresive count: " << i << std::endl;
        i--;

        if (i <= 0) {
            i = n + 1;
        }
    }

    return 0;
}