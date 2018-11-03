#include <iostream>
#include <vector>

using citer = std::vector<int>::const_iterator;

void print(citer beg, citer end) {
  if (beg != end) {
    std::cout << *beg << " ";
    print(++beg, end);
  }
  std::cout << std::endl;
}

int main() {
  std::vector<int> vec { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
  print(vec.cbegin(), vec.cend());

  return 0;
}
