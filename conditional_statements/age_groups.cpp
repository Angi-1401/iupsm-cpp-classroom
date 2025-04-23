#include <iostream>

int main() {
  int age;
  std::cout << "Enter your age: ";
  std::cin >> age;

  if (age >= 1 && age <= 4) {
    std::cout << "You are a toddler" << std::endl;
  } else if (age >= 5 && age <= 12) {
    std::cout << "You are a kid" << std::endl;
  } else if (age >= 13 && age <= 18) {
    std::cout << "You are a teenager" << std::endl;
  } else {
    std::cout << "You are an adult" << std::endl;
  }
}