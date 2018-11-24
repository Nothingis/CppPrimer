#include <iostream>
#include <sstream>

std::istream& Func(std::istream &is) {
  std::string buf;
  while (is >> buf)
    std::cout << buf << std::endl;
  is.clear();
  return is;
}

int main() {
  std::istringstream iss("istringstream");
  Func(iss);
  return 0;
}

