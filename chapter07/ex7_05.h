#ifndef CHAPTER07_EX7_05_H_
#define CHAPTER07_EX7_05_H_

#include <string>

class Person {
  std::string name;
  std::string address;
 public:
  auto get_name() const -> std::string const& {
    return name;
  }
  auto get_addr() const -> std::string const& {
    return address;
  }
};

#endif  // CHAPTER07_EX7_05_H_
