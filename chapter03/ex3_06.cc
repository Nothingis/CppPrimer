#include <iostream>
#include <string>

int main() {
  std::string str;
  std::cin >> str;

  for (auto &c : str)
    c = 'x';

  std::cout << str << std::endl;

  return 0;
}

