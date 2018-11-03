#include <iostream>

void f() {
  std::cout << "f()" << std::endl;
}
void f(int) {
  std::cout << "f(int)" << std::endl;
}
void f(int, int) {
  std::cout << "f(int, int)" << std::endl;
}
void f(double, double) {
  std::cout << "f(double, double)" << std::endl;
}

int main() {
  f(1);
  // f(3.14, 1);
  f(1, 0);
  f(3.14, 3.14);

  return 0;
}
