#include <iostream>

int main(int argc, char *argv[]) {
    float temp[7], max = 0, min = 100, avrg = 0, acum = 0, count = 0;
    bool valid = false;

    for (int i = 0; i < 7; i++) {
        do {
            std::cout << "Day " << i + 1 << ": ";
            std::cin >> temp[i];

            if (std::cin.fail()) {
                std::cout << "There was an error reading the number" << std::endl;
                std::cout << "Please, try again" << std::endl;
                valid = false;

                std::cin.clear();
                std::cin.ignore(1000, '\n');
            } else {
                valid = true;
            }
        } while (!valid);
    }

    for (int i = 0; i < 7; i++) {
        if (temp[i] > max) max = temp[i];
        if (temp[i] < min) min = temp[i];
        if (temp[i] >= 30) count++;
        acum += temp[i];
    }

    avrg = acum / (sizeof(temp) / sizeof(temp[0]));

    std::cout << "Temperatures:" << std::endl;
    for (int i = 0; i < 7; i++) {
        std::cout << "Day " << i + 1 << ": " << temp[i] << std::endl;
    }

    std::cout << "Statistics:" << std::endl;
    std::cout << "Max temp.: " << max << " °C" << std::endl;
    std::cout << "Min temp.: " << min << " °C" << std::endl;
    std::cout << "Days when temp exceeds 30 °C: " << count << std::endl;
    std::cout << "Average temp.: " << avrg << " °C" << std::endl;

    for (int i = 0; i < 7; i++) {
        if (temp[i] > avrg) std::cout << "Day " << i + 1 << " has a temp. over the avrg." << std::endl;
    }
}