#include <iostream>
#include <vector>

int main() {
  std::vector<int> ivec;
  for (int i; std::cin >> i; ivec.push_back(i)) {}

  for (int i = 0; i < ivec.size() - 1; ++i)
    std::cout << ivec[i] + ivec[i + 1] << " ";

  std::cout << std::endl;

  return 0;
}
