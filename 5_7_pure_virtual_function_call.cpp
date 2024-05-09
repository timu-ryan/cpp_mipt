#include <iostream>

struct Base {
  int a;
  virtual void h() = 0;
  void f() {
    std::cout << "f";
    // h();
  }
  Base(): a(f()) {  
    std::cout << "Base";
    h();
    // f();
  }
  virtual ~Base() = default;
};

struct Derived {
  int x;
  void h() override {
    std::cout << "h" << x;
  }
  Derived() {
    std::cout << "Derived";
  }
};



int main() {
  Derived d;
}

