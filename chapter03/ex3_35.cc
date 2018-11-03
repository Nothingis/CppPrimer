#include <iostream>

int main() {
  const int kSize = 10;
  int arr[kSize];
  for (auto ptr = arr; ptr != arr + size; ++ptr)
    *ptr = 0;

  return 0;
}
