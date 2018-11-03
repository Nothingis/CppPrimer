#include <iostream>
#include "include/Sales_item.h"

int main() {
  Sales_item total, temp;

  if (std::cin >> total) {
    while (std::cin >> temp && temp.isbn() == total.isbn())
      total += temp;

      std::cout << total << std::endl;
  }
  return 0;
}
