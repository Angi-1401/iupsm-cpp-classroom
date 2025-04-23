#include <iostream>

int main() {
  int num;
  std::cin >> num;

  if (num * -1 < 0) {
    std::cout << "The number is positive" << std::endl;
  } else if (num * -1 > 0) {
    std::cout << "The number is negative" << std::endl;
  } else {
    std::cout << "The number is cero" << std::endl;
  }
}