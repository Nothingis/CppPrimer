#include <fstream>
#include <iostream>

#include "../chapter07/ex7_26.h"

int main(int argc, char **argv) {
  ifstream input(argv[1]);
  ofstream output(argv[2], ofstream::app);

  Sales_data total;
  if (read(input, total)) {
    Sales_data trans;
    while (read(input, trans)) {
      if (total.isbn() == trans.isbn()) {
        total.combine(trans);
      } else {
        print(output, total) << std::endl;
        total = trans;
      }
    }
    print(output, total) << std::endl;
  } else {
    std::cerr << "Error!" << std::endl;
  }
  return 0;
}
