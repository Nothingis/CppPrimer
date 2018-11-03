#include <iostream>
#include <vector>

int main() {
  std::vector<int> ivec;
  for (int i; std::cin >> i; ivec.push_back(i)) {}

  for (auto i = ivec.begin(); i + 1 != ivec.end();)
    std::cout << *i + *(++i) << " ";

  std::cout << std::endl;

  return 0;
}
