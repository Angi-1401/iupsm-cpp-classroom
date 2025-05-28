#include <cstdlib>
#include <iostream>

int main(int argc, char *argv[]) {
    float temp[7] = {24.7, 32.3, 26.8, 27.2, 31.5, 25.9, 28.4};
    int elements = (sizeof(temp) / sizeof(temp[0]));
    int acum = 0;

    for (int i = 0; i < elements; i++) {
        acum += temp[i];
    }

    float average = acum / elements;
    std::cout << "Average temp.: " << average << " °C" << std::endl;

    for (int i = 0; i < elements; i++) {
        if (temp[i] > average) {
            std::cout << "The day " << i + 1 << " has a temp. over the avrg." << std::endl;
        }
    }
    return 0;
}