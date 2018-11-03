#include <iostream>

int main() {
  int i = 0, &r = i;

  auto a = r; /* a는 int */

  const int ci = i, &cr = ci;

  auto b = ci;  // b는 int
  auto c = cr;  // c는 int
  auto d = &i;  // d는 int*
  auto e = &ci;  // e는 const int*

  const auto f = ci;  // f는 const int
  auto &g = ci;  // g는 const int&

  a = 42;
  b = 42;
  c = 42;
  d = 42;
  e = 42;
  g = 42;

  return 0;
}
