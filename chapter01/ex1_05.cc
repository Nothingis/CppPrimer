#include <iostream>

int main() {
  int v1 = 0, v2 = 0;

  std::cin >> v1;
  std::cin >> v2;

  std::cout << "The multiplication of " << std::endl
        << v1 << std::endl
        <<" and " << std::endl
        << v2
        << " is " << v1 * v2 << std::endl;

  return 0;
}
