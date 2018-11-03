#include <iostream>
#include <string>

int main() {
  std::string scores[] = { "F", "D", "C", "B", "A" };

  int input = 0;

  while (std::cin >> input) {
    std::string grade;
    if (input < 60)
      grade = scores[0];
    else
      grade = scores[(input - 50) / 10];

    std::cout << grade << std::endl;
  }

  return 0;
}
