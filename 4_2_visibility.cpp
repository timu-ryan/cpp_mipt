#include <iostream>

// IV. Inheritance

// 4.1. Visibility and accessibility of friends and methods.

struct Base {
  int x;
  void f() {
    std::cout << 1;
  };
};

struct Derived: Base {
  int y;
  void f() {
    std::cout << 2;
  }
};


int main() {
  Derived d;
  d.f();

}


