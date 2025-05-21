#include <iostream>

int main(int argc, char *argv[]) {
    int n;

    std::cout << "Insert an integer number: ";
    std::cin >> n;

    for (int i = 1; i <= 10; i++) {
        std::cout << n << " x " << i << " = " << n * i << std::endl;
    }

    return 0;
}