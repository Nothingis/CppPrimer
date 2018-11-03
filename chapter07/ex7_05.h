#ifndef CHAPTER07_EX7_05_H_
#define CHAPTER07_EX7_05_H_

#include <string>

class Person {
 public:
  std::string const& get_name() const {
    return name_;
  }
  std::string const& get_addr() const {
    return address_;
  }
  std::string name_;
  std::string address_;
};

#endif  // CHAPTER07_EX7_05_H_
