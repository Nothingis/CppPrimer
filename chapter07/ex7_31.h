#ifndef CHAPTER07_EX7_31_H_
#define CHAPTER07_EX7_31_H_

class Y;

class X {
  Y* y = nullptr;
};

class Y {
  X x;
};

#endif  // CHAPTER07_EX7_31_H_
