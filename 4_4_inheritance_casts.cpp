#include <iostream>

// 4.4. Casts in case of inheritance

struct Base {
  int x = 1;
  Base() = default;
  Base(const Base& other): x(other.x) { std::cout << "Copy!"; }
};

struct Derived: Base {
  int y = 2;
};

// можно принять по ссылке
// slicing - если создавать копию
void f(Base b) {
  std::cout << b.x;
}

int main() {
  Derived d;
  f(d);  // создается base от derived
}

