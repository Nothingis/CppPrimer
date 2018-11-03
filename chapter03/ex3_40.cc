#include <iostream>
#include <cstring>

int main() {
  const char cstr1[] = "abcd";
  const char cstr2[] = "abdd";

  char cstr3[8 + 1];

  strcpy(cstr3, cstr1);
  strcat(cstr3, cstr2);

  std::cout << cstr3 << std::endl;

  return 0;
}
