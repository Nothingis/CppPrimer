#include <iostream>
#include <string>

int main() {
  std::string result;
  for (std::string tmp; std::cin >> tmp; result += (tmp + " ")) {}
  std::cout << "The result is " << result << std::endl;

  return 0;
}
