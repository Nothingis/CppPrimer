#include <iostream>
#include <vector>

int func(int a, int b);

using FP1 = decltype(func) *;
typedef decltype(func) *FP2;
using FP3 = int (*)(int a, int b);
using FP4 = int(int a, int b);
typedef int (*FP5)(int a, int b);
using FP6 = decltype(func);

int add(int a, int b) {
  return a + b;
}
int subt(int a, int b) {
  return a - b;
}
int multi(int a, int b) {
  return a * b;
}
int divi(int a, int b) {
  return b != 0 ? a / b : 0;
}

int main() {
  std::vector<FP1> vec { add, subt, multi, divi };

  for (auto f : vec)
    std::cout << f(3, 4) << std::endl;

  return 0;
}
