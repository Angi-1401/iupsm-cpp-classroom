#include <iostream>
using namespace std;

int main() {
  int num;
  float num_2;
  
  cin >> num; // Leer el número

  num_2 = num % 2;
  if (num_2 == 0) {
    cout << "El resto es: " << num_2 << " Es par" << endl;
  } else {
    cout << "El resto es: " << num_2 << " Es impar" << endl;
  }
}
