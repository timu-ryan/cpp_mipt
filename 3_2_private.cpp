#include <iostream>

// 3.2. Access modifiers


class C {
private:
  int x{5};   // == (x = 5)
public:
  int xx;
  void f(int y) {
    std::cout << x + y;
  }
};

int main() {
  C c;

  c.f(3);

  std::cout << (int&)c; // can get private field
}



