#include <cstdlib>
#include <iostream>
#include <thread>

int main(int argc, char *argv[]) {
    int notes[10];
    int maxCalif = 0, minCalif = 100, suma = 0, prom = 0;
    bool valid = false;

    for (int i = 0; i < 10; i++) {
        do {
            std::cout << "Note of Student " << i + 1 << ": ";
            std::cin >> notes[i];

            if (std::cin.fail()) {
                std::cout << "There was an error reading the number" << std::endl;
                std::cout << "Please, try again" << std::endl;
                valid = false;

                std::cin.clear();
                std::cin.ignore(1000, '\n');
                std::this_thread::sleep_for(std::chrono::seconds(2));
                system("cls");
            } else {
                if (minCalif > notes[i]) minCalif = notes[i];
                if (maxCalif < notes[i]) maxCalif = notes[i];
                suma += notes[i];
                valid = true;
            }
        } while (!valid);
    }

    system("cls");
    std::cout << "\nMetrics:" << std::endl;
    for (int i = 0; i < 10; i++) {
        std::cout << i + 1 << " Student Performance: ";
        if (notes[i] >= 90) {
            std::cout << "Excellent" << std::endl;
        } else if (notes[i] >= 80 && notes[i] <= 89) {
            std::cout << "Good" << std::endl;
        } else if (notes[i] >= 70 && notes[i] <= 79) {
            std::cout << "Regular" << std::endl;
        } else {
            std::cout << "Failed" << std::endl;
        }
    }

    int cant = (sizeof(notes) / sizeof(notes[0]));
    prom = suma / cant;

    std::cout << "Average: " << prom << std::endl;
    std::cout << "Highest Note: " << maxCalif << std::endl;
    std::cout << "Lowest Note: " << minCalif << std::endl;
    return 0;
}