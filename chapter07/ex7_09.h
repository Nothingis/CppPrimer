#ifndef CHAPTER07_EX7_09_H_
#define CHAPTER07_EX7_09_H_

#include <string>
#include <iostream>

struct Person {
  std::string const& getName() const {
    return name_;
  }
  std::string const& getAddress() const {
    return address_;
  }

  std::string name_;
  std::string address_;
};

std::istream &read(std::istream &is, Person &person) {
  return is >> person.name_ >> person.address_;
}

std::ostream &print(std::ostream &os, const Person &person) {
  return os << person.name_ << " " << person.address_;
}

#endif  // CHAPTER07_EX7_09_H_
