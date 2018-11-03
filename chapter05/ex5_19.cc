#include <iostream>
#include <string>

int main() {
  std::string str1, str2;
  std::cin >> str1 >> str2;
  do {
    std::cout << (str1 > str2 ? str1 : str2) << " is bigger" << std::endl;
  } while (std::cin >> str1 >> str2);

  return 0;
}
