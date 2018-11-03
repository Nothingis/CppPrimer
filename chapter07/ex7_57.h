#ifndef CHAPTER07_EX7_57_H_
#define CHAPTER07_EX7_57_H_

#include <string>

class Account {
 public:
  void calculate() {
    amount += amount * interestRate;
  }
  static double rate() {
    return interestRate;
  }
  static void rate(double newRate) {
    interestRate = newRate;
  }

 private:
  std::string owner;
  double amount;
  static double interestRate;
  static constexpr double todayRate = 42.42;
  static double initRate() {
    return todayRate;
  }
};

double Account::interestRate = initRate();

#endif  // CHAPTER07_EX7_57_H_
