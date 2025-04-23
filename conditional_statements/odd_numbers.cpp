#include <iostream>

int main() {
  // Declare variables
  int num;

  // Get user input
  std::cout << "Enter a number: ";
  std::cin >> num;

  // Check if the number is odd or even
  if (num % 2 == 0) {
    std::cout << "The number is even" << std::endl;
  } else {
    std::cout << "The number is odd" << std::endl;
  }
}

