#include <iostream>

// 3.7. Pointers to members.

struct S {

  int x;
  double y;

  void f(int z) {
    std::cout << x + z;
  }
}


int main() {

  int S::* p = &S::x;
  S s{1, 3.14};
  
  s.*p = 2;
  std::cout << s.*p;

  S* px = &s;
  std::cout << ps->*p;

  void (S::* pf)(int) = &S::f; // int - возвращаяемый тип
  (s.*pf)(3);
  (ps->*pf)(5);  // применяется часто в QT

}



