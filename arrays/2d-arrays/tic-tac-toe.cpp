#include <cstdlib>
#include <iostream>
#include <thread>

int main(int argc, char *argv[]) {
    char board[3][3];
    int row, col;
    int turn = 0;
    bool win = false, valid = false;

    // Initialize board
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }

    // Main loop
    while ((turn < 9) && (!win)) {
        // Clear terminal
        std::system("cls");

        // Show board
        std::cout << "Current board:" << std::endl;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                std::cout << board[i][j];
                if (j < 2) std::cout << " | ";
            }
            if (i < 2) std::cout << "\n---+---+---" << std::endl;
        }

        // Determine player
        char player = (turn % 2 == 0) ? 'X' : 'O';
        std::cout << "\nPlayer " << player << " turn." << std::endl;

        // Read and validate input player
        do {
            std::cout << "Enter row (0-2): ";
            std::cin >> row;

            if (std::cin.fail()) {
                std::cout << "There was an error reading the number. Try again." << std::endl;
                std::cin.clear();
                std::cin.ignore(1000, '\n');
                valid = false;
            } else if ((row < 0) || (row > 2)) {
                std::cout << "Out of range. Try again." << std::endl;
                valid = false;
            } else {
                valid = true;
            }
        } while (!valid);

        do {
            std::cout << "Enter column (0-2): ";
            std::cin >> col;

            if (std::cin.fail()) {
                std::cout << "There was an error reading the number. Try again." << std::endl;
                std::cin.clear();
                std::cin.ignore(1000, '\n');
                valid = false;
            } else if ((col < 0) || (col > 2)) {
                std::cout << "Out of range. Try again." << std::endl;
                valid = false;
            } else {
                valid = true;
            }
        } while (!valid);

        // Validate positions
        if (board[row][col] != ' ') {
            std::cout << "Invalid mode. The position is already occupied. Try again." << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(1));
            continue;
        }

        // Mark board
        board[row][col] = player;
        turn++;

        // Check if someone wins
        for (int i = 0; i < 3; i++) {
            if ((board[i][0] == player) && (board[i][1] == player) && (board[i][2] == player)) win = true;
            if ((board[0][i] == player) && (board[1][i] == player) && (board[2][i] == player)) win = true;
        }
        if ((board[0][0] == player) && (board[1][1] == player) && (board[2][2] == player)) win = true;
        if ((board[2][0] == player) && (board[1][1] == player) && (board[0][2] == player)) win = true;
    }

    // Clear terminal
    std::system("cls");

    // Show final results
    std::cout << "Final board:" << std::endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << board[i][j];
            if (j < 2) std::cout << " | ";
        }
        if (i < 2) std::cout << "\n---+---+---" << std::endl;
    }

    if (win)
        std::cout << "\nPlayer " << ((turn - 1) % 2 == 0 ? 'X' : 'O') << " wins!" << std::endl;
    else
        std::cout << "\nIt's a draw!" << std::endl;

    return 0;
}