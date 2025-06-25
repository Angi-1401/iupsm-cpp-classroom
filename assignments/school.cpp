#include <cstdlib>
#include <iostream>

int main(int argc, char *argv[]) {
    int students, subjects;
    bool valid = false;

    do {
        std::cout << "No. Students: ";
        std::cin >> students;

        if (std::cin.fail()) {
            std::cout << "There was an error reading the number." << std::endl;
            std::cout << "Please, try again." << std::endl;
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            valid = false;
        } else if (students <= 0 || students > 100) {
            std::cout << "Out of limits." << std::endl;
            std::cout << "Please, try again." << std::endl;
            valid = false;
        } else {
            valid = true;
        }
    } while (!valid);

    do {
        std::cout << "No. Subjects: ";
        std::cin >> subjects;

        if (std::cin.fail()) {
            std::cout << "There was an error reading the number." << std::endl;
            std::cout << "Please, try again." << std::endl;
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            valid = false;
        } else if (subjects <= 0 || subjects > 100) {
            std::cout << "Out of limits." << std::endl;
            std::cout << "Please, try again." << std::endl;
            valid = false;
        } else {
            valid = true;
        }
    } while (!valid);

    float grades[100][100];
    float grade, acumStudents, acumSubjects, maxGrade = 0, minGrade = 21;
    int maxRow, maxCol, minRow, minCol;

    for (int i = 0; i < students; i++) {
        for (int j = 0; j < subjects; j++) {
            do {
                std::cout << "Student " << i + 1 << ". Subject " << j + 1 << ": ";
                std::cin >> grade;

                if (std::cin.fail()) {
                    std::cout << "There was an error reading the number." << std::endl;
                    std::cout << "Please, try again." << std::endl;
                    std::cin.clear();
                    std::cin.ignore(1000, '\n');
                    valid = false;
                } else if (grade <= 0 || grade > 20) {
                    std::cout << "Out of limits." << std::endl;
                    std::cout << "Please, try again." << std::endl;
                    valid = false;
                } else {
                    valid = true;
                }
            } while (!valid);

            grades[i][j] = grade;

            if (grades[i][j] > maxGrade) {
                maxGrade = grades[i][j];
                maxRow = i;
                maxCol = j;
            }

            if (grades[i][j] < minGrade) {
                minGrade = grades[i][j];
                minRow = i;
                minCol = j;
            }
        }
    }

    std::system("cls");

    std::cout << "Average per Student:" << std::endl;
    for (int i = 0; i < students; i++) {
        acumStudents = 0;
        for (int j = 0; j < subjects; j++) {
            acumStudents += grades[i][j];
        }
        std::cout << "Student " << i << ": " << acumStudents / subjects << std::endl;
    }

    std::cout << "Average per Subject:" << std::endl;
    for (int j = 0; j < subjects; j++) {
        acumSubjects = 0;
        for (int i = 0; i < students; i++) {
            acumSubjects += grades[i][j];
        }
        std::cout << "Subject " << j << ": " << acumSubjects / students << std::endl;
    }

    std::cout << "Max. grade: " << maxGrade << " (Student: " << maxRow + 1 << " - Subject: " << maxCol + 1 << ")" << std::endl;
    std::cout << "Min. grade: " << minGrade << " (Student: " << minRow + 1 << " - Subject: " << minCol + 1 << ")" << std::endl;

    return 0;
}