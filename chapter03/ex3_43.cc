#include <iostream>

int main() {
  int ia[3][4] = { { 0, 1, 2, 3 }, { 4, 5, 6, 7 }, { 8, 9, 10, 11 } };

  for (int (&a)[4] : ia)
    for (int b : a)
      std::cout << b << " ";
  std::cout << std::endl;

  for (size_t i = 0; i != 3; ++i)
    for (size_t j = 0; j != 4; ++j)
      std::cout << ia[i][j] << " ";
  std::cout << std::endl;

  for (int (*row)[4] = ia; row != ia + 3; ++row)
    for (int *col = *row; col != *row + 4; ++col)
      std::cout << *col << " ";
  std::cout << std::endl;

  return 0;
}
