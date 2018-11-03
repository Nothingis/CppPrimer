#include <iostream>
#include <string>

int main() {
  for (std::string str1, str2; std::cin >> str1 >> str2;) {
    if (str1.size() == str2.size()) {
      std::cout << "equal" << std::endl;
    } else {
      std::cout << ((str1.size() > str2.size()) ? str1 : str2) << "is longer"
          << std::endl;
    }

    return 0;
  }
}
