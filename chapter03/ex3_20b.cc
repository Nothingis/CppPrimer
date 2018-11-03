#include <iostream>
#include <vector>

int main() {
  std::vector<int> ivec;
  for (int i; std::cin >> i; ivec.push_back(i)) {}

  if (ivec.size() < 4) {
    std::cout << "wrong input" << std::endl;
  } else {
    for (decltype(ivec.size()) begin = 0, end = ivec.size() - 1; begin <= end;
        ++begin, --end)
      std::cout << ivec[begin] + ivec[end] << " ";
    std::cout << std::endl;
  }

  return 0;
}
