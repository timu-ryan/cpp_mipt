#include <iostream>

// 6.5. Basic compile time computation

template <int N>
struct Fibonacci {
  static const int value = Fibonacci<N-1>::vale + Fibonacci<N-2>::value; // Fatal error
  // internal compiler error
  // cc1plus
  // sigfault in compile time
};

// TODO: how to fix
// - specialization

int main() {
  std::cout << Fibonacci<20>::value;
}

