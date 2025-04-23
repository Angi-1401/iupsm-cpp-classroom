#include <iostream>

int main() {
  int num;
  float num_2;
  
  std::cin >> num;

  num_2 = num % 2;
  if (num_2 == 0) {
    std::cout << "El resto es: " << num_2 << " Es par" << std::endl;
  } else {
    std::cout << "El resto es: " << num_2 << " Es impar" << std::endl;
  }
}
