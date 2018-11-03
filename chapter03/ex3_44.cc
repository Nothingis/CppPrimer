#include <iostream>

int main() {
  int ia[3][4] = { { 0, 1, 2, 3 }, { 4, 5, 6, 7 }, { 8, 9, 10, 11 } };

  using row = int[4];
  for (row& a : ia)
    for (int b : a)
      std::cout << b << " ";
  std::cout << std::endl;

  for (size_t i = 0; i != 3; ++i)
    for (size_t j = 0; j != 4; ++j)
      std::cout << ia[i][j] << " ";
  std::cout << std::endl;

  for (row* a = ia; a != ia + 3; ++a)
    for (int *col = *a; col != *a + 4; ++col)
      std::cout << *col << " ";
  std::cout << std::endl;

  return 0;
}
