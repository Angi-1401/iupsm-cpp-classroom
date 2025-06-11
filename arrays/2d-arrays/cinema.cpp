#include <iostream>

const int ROWS = 5;
const int COLS = 5;

int main() {
    int cinema[ROWS][COLS] = {0};

    int row, col;
    char opt;

    do {
        std::cout << "Available seats:" << std::endl;
        for (int i = 0; i < ROWS; i++) {
            for (int j = 0; j < COLS; j++) {
                std::cout << cinema[i][j] << " ";
            }
            std::cout << std::endl;
        }

        do {
            std::cout << "Enter row (0-" << ROWS - 1 << "): ";
            std::cin >> row;

            if (row < 0 || row >= ROWS) {
                std::cout << "Selected row is invalid." << std::endl;
            }
        } while (row < 0 || row >= ROWS);

        do {
            std::cout << "Enter column (0-" << COLS - 1 << "): ";
            std::cin >> col;

            if (col < 0 || col >= COLS) {
                std::cout << "Selected column is invalid." << std::endl;
            }
        } while (col < 0 || col >= COLS);

        if (cinema[row][col] == 0) {
            cinema[row][col] = 1;
            std::cout << "Assigned seat: " << row << " " << col << std::endl;
            std::cout << "Thank you! :D" << std::endl;
        } else {
            std::cout << "Sorry. The seat " << row << " " << col << " is already reserved." << std::endl;
        }

        std::cout << "Do you want to reserve another seat? (Y/N)" << std::endl;
        std::cin >> opt;

    } while (opt == 'y' || opt == 'Y');

    std::cout << "Reserved seats for the function:" << std::endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            std::cout << cinema[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}