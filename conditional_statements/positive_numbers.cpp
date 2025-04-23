#include <iostream>

int main() {
  // Declare variable
  int num;

  // Get user input
  std::cout << "Enter a number: ";
  std::cin >> num;

  // Check if the number is positive, negative or cero
  if (num > 0) {
    std::cout << "The number is positive" << std::endl;
  } else if (num < 0) {
    std::cout << "The number is negative" << std::endl;
  } else {
    std::cout << "The number is cero" << std::endl;
  }
}