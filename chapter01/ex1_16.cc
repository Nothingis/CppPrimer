#include <iostream>

int main() {
  int sum = 0;
  int input;
  while (std::cin >> input)
    sum += input;

  std::cout << sum << std::endl;

  return 0;
}
