#include <iostream>
#include <vector>

int main() {
  std::vector < std::string > strvec;
  for (std::string str; std::cin >> str; strvec.push_back(str)) {}

  return 0;
}
