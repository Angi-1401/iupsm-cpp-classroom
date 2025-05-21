#include <iostream>
#include <string>

int main(int argc, char *argv[]) {
    int integer_number = 5;
    float float_number = 3.14;
    char character = 'A';
    bool boolean = true;
    std::string text = "Hello, World!";

    std::cout << "Integer: " << integer_number << std::endl;
    std::cout << "Float: " << float_number << std::endl;
    std::cout << "Character: " << character << std::endl;
    std::cout << "Boolean: " << boolean << std::endl;  // Will print 1 for true, 0 for false
    std::cout << "String: " << text << std::endl;
    return 0;
}