#include "ex7_41.h"

#include <iostream>

int main() {
  std::cout << "Sales_data d1;" << std::endl;
  Sales_data d1;
  std::cout << "Sales_data d2(\"string\"); " << std::endl;
  Sales_data d2("string");
  std::cout << "Sales_data d3(\"string\", 1, 1.0);" << std::endl;
  Sales_data d3("string", 1, 1.0);
  std::cout << "Sales_data d4 = new Sales_data();" <<std::endl;
  Sales_data *d4 = new Sales_data();
  return 0;
}

