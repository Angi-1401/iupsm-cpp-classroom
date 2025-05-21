#include <iostream>

int main(int argc, char *argv[]) {
    int n, acum = 0;

    std::cout << "Insert an integer number: ";
    std::cin >> n;

    for (int i = 0; i <= n; i++) {
        std::cout << "Iteration " << i << " of " << n << std::endl;

        acum += i;
        std::cout << "Acummulated sum: " << acum << std::endl;
    }

    std::cout << "The sum of the first " << n << " numbers is: " << acum << std::endl;

    return 0;
}