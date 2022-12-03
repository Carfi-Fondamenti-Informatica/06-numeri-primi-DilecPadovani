#include <iostream>
#include "lib.h"

int main()
{

  int numero, divisore = 2;
  std::cin >> numero;

  if (number_is_prime(numero))
  {
    std::cout << "numero primo";
  }
  else
  {
    std::cout << "numero non primo";
  }

  return 0;
}
