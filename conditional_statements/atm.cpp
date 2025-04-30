/*
Desarrollar un programa en la terminal con C++ que simule el comportamiento de una sesión en un cajero.
Este cajero puede realizar dos operaciones:
- Ingresar fondo
- Retirar fondos
El algoritmo debe permitir al usuario preguntar si va a ingresar y luego si va a retirar y modificar el saldo del usuario respectivamente.
*/

#include <iostream>

int main()
{
  float balance = 0.0;
  float deposit, withdraw;
  char choice;

  std::cout << "Welcome to the ATM!" << std::endl;
  std::cout << "Your current balance is: $" << balance << std::endl;

  std::cout << "Would you like to deposit funds? (y/n): ";
  std::cin >> choice;

  if (choice == 'y' || choice == 'Y')
  {
    std::cout << "Enter the amount to deposit: $";
    std::cin >> deposit;
    balance += deposit;
    std::cout << "You have deposited: $" << deposit << std::endl;
  }
  std::cout << "Your new balance is: $" << balance << std::endl;

  std::cout << "Would you like to withdraw funds? (y/n): ";
  std::cin >> choice;
  if (choice == 'y' || choice == 'Y')
  {
    std::cout << "Enter the amount to withdraw: $";
    std::cin >> withdraw;
    if (withdraw > balance)
    {
      std::cout << "Insufficient funds. You cannot withdraw more than your current balance." << std::endl;
    }
    else
    {
      balance -= withdraw;
      std::cout << "You have withdrawn: $" << withdraw << std::endl;
    }
  }
  std::cout << "Your final balance is: $" << balance << std::endl;

  std::cout << "Thank you for using the ATM!" << std::endl;
  return 0;
}