#include <iostream>
#include <vector>
#include <string>

int main() {
  std::vector < std::string > str;
  for (std::string tmp; std::getline(std::cin, tmp); str.push_back(tmp)) {}
  for (auto it = str.begin(); it != str.end() && !it->empty(); ++it) {
    if (it == str.begin())
      for (auto& ch : *it)
        ch = toupper(ch);
    std::cout << *it << std::endl;
  }

  return 0;
}
