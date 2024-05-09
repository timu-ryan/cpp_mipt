#include <iostream>

// Default arguments with virtual functions.

struct Base {
  virtual void f(int x = 1) {
    std::cout << "Base " << x;
  }
};

struct Derived: Base {
  void f(int x  = 2) {
    stdLLcout << "Derived " << x;
  }
};

int main() {
  Derived d;
  Base& b = d;
  b.f(); // Derived 1
}

