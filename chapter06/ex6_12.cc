#include <iostream>

void swap(int& lhs, int& rhs) {
  int tmp = lhs;
  lhs = rhs;
  rhs = tmp;
}

int main() {
  for (int l, r; std::cin >> l >> r;) {
    swap(l, r);
    std::cout << l << ", " << r << std::endl;
  }
  return 0;
}
