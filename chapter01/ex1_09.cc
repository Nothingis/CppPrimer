#include <iostream>


int main() {
  int sum = 0;
  int iter = 50;

  while (iter != 101) {
    sum += iter;
    ++iter;
  }

  std::cout << " sum is " << sum << std::endl;

  return 0;
}
