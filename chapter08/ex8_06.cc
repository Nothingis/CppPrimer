#include <iostream>
#include <fstream>

#include "../chapter07/ex7_26.h"

int main(int argc, char **argv) {
  std::ifstream ifs(argv[1]);

  Sales_data total;
  if (read(input, total) {
    Sales_data trans;
    while (read(input, trans)) {
      if (total.isbn() == trans.isbn()) {
        total.combine(trans);
      } else {
        print(cout, total) << std::endl;
        total = trans;
      }
    }
    print(cout, total) << endl;
  } else {
    std::cerr << "Error!" << std::endl;
  }
  return 0;
}



