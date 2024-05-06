#include <iostream>

// V. Polymorphism and virtual functions.

// 5.1. Idea of virtual functions.

struct Base {
  virtual void f() {
    std::cout << 1;
  }

};

struct Derived: Base {
  void f() {
    std::cout << 2;
  }
};

int main() {
  Derived d;
  Base& b = d;
  b.f();

  Base* bb = &d;
  bb->f();

};

