//Inicio
//  Leer num
//  Si num * -1 < 0
//    Escribir "Es positivo"
//  Sino Si num * -1 > 0 
//    Escribir "Es negativo"
//  Sino
//    Escribir "Es cero"
//Fin


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

// < <- Operador Menor que
// > <- Operador Mayor que
// <= <- Operador Menor o igual que
// >= <- Operador Mayor o igual que