#include <iostream>
#include <vector>

int main() {
  std::vector<int> ivec;
  for (int i; std::cin >> i; ivec.push_back(i)) {}

  if (ivec.size() < 4) {
    std::cout << "wrong input" << std::endl;
  } else {
    for (auto bIt = ivec.begin(), eIt = ivec.end() - 1; bIt <= eIt;
        ++bIt, --eIt)
      std::cout << *bIt + *eIt << " ";
    std::cout << std::endl;
  }

  return 0;
}
