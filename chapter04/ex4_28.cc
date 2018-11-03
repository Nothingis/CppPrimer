#include <iostream>

int main() {
  using std::cout;
  using std::endl;

  cout << "void: nullptr\t" << sizeof(std::nullptr_t) << endl;

  cout << "bool:\t\t" << sizeof(bool) << endl << endl;

  cout << "char:\t\t" << sizeof(char) << endl;
  cout << "wchar_t:\t" << sizeof(wchar_t) << endl;
  cout << "char16_t:\t" << sizeof(char16_t) << endl;
  cout << "char32_t:\t" << sizeof(char32_t) << endl << endl;

  cout << "short:\t\t" << sizeof(short) << endl;
  cout << "int:\t\t" << sizeof(int) << endl;
  cout << "long:\t\t" << sizeof(long) << endl;
  cout << "long long:\t" << sizeof(long long) << endl << endl;

  cout << "float:\t\t" << sizeof(float) << endl;
  cout << "double:\t\t" << sizeof(double) << endl;
  cout << "long double:\t" << sizeof(long double) << endl << endl;

  cout << "int8_t:\t\t" << sizeof(int8_t) << endl;
  cout << "uint8_t:\t" << sizeof(uint8_t) << endl;
  cout << "int16_t:\t" << sizeof(int16_t) << endl;
  cout << "uint16_t:\t" << sizeof(uint16_t) << endl;
  cout << "int32_t:\t" << sizeof(int32_t) << endl;
  cout << "uint32_t:\t" << sizeof(uint32_t) << endl;
  cout << "int64_t:\t" << sizeof(int64_t) << endl;
  cout << "uint64_t:\t" << sizeof(uint64_t) << endl;

  return 0;
}
