#include <iostream>
#include <string>

int main() {
  for (std::string str; std::cin >> str;)
    for (auto i : str)
      if (!std::ispunct(i))
        std::cout << i;

  return 0;
}
