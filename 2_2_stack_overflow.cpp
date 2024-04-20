#include <iostream>

void f(int x) {
  std::cout << ++x << '\n';
  f(x);
}

int main() {
  f(0);
  // sigmentation fault
}

