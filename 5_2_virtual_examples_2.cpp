#include <iostream>

struct Mom {
  virtual void f() {
    std::cout << 1;
  }
};

struct Dad {
  void f() {
    std::cout << 2;
  }
};

struct Son final: Mom, Dad {
  void f() override {
    std::cout << 3;
  };
}; 

int main() {
  Son s;
  Mom& m = s;
  Dad& d = s;

  m.f();
  d.f();

}

