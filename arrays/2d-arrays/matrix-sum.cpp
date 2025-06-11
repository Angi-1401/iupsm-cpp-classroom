#include <iostream>

int main() {
    int a[2][2] = {{1, 2}, {3, 4}}, b[2][2] = {{5, 6}, {7, 8}};
    int sum[2][2];

    for (int i = 0; i <= 1; i++) {
        for (int j = 0; j <= 1; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    std::cout << "Matrix sum:" << std::endl;
    for (int i = 0; i <= 1; i++) {
        for (int j = 0; j <= 1; j++) {
            std::cout << sum[i][j] << " ";
        }
        std::cout << std::endl;
    }
}