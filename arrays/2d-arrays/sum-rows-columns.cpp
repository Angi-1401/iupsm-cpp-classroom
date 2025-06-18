#include <iostream>

const int ROWS = 3;
const int COLS = 4;

int main(int argc, char *argv[]) {
    int matrix[ROWS][COLS] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

    std::cout << "Sums for each row:" << std::endl;
    for (int i = 0; i < ROWS; i++) {
        int row_sum = 0;
        for (int j = 0; j < COLS; j++) {
            row_sum += matrix[i][j];
        }
        std::cout << "Sum of row " << i << ": " << row_sum << std::endl;
    }

    std::cout << "Sums for each column:" << std::endl;
    for (int j = 0; j < COLS; j++) {
        int col_sum = 0;
        for (int i = 0; i < ROWS; i++) {
            col_sum += matrix[i][j];
        }
        std::cout << "Sum of column " << j << ": " << col_sum << std::endl;
    }

    return 0;
}