#include <iostream>

int main(int argc, char *argv[])
{
  // Declare variables
  float l1, l2, l3;

  // Read user inputs
  std::cout << "Side 1: " << std::endl;
  std::cin >> l1;
  std::cout << "Side 2: " << std::endl;
  std::cin >> l2;
  std::cout << "Side 3: " << std::endl;
  std::cin >> l3;

  // Check conditional statements to determine triangles and print the result
  if ((l1 + l2 > l3) && (l1 + l3 > l2) && (l2 + l3 > l1))
  {
    if ((l1 == l2) && (l1 == l3))
    {
      std::cout << "Triangle: Equilateral" << std::endl;
    }
    else if ((l1 == l2) || (l1 == l3) || (l2 == l3))
    {
      std::cout << "Triangle: Isosceles" << std::endl;
    }
    else
    {
      std::cout << "Triangle: Scalene" << std::endl;
    }
  }
  else
  {
    std::cout << "You can not make a triangle with those numbers.";
  }

  return 0;
}