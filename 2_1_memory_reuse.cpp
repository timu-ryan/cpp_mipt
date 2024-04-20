#include <iostream>

int main() {
  int a = 1;
  int* p = &a;

  {
    int b = 2;
    p = &b;
    // время жизни переменной b закончено 
  }
  
  std::cout << p << '\n';
  std::cout << *p << '\n';   // UB, but most likely 2

  int c = 3, d = 4, e = 5, f = 6;

  std::cout << &c << ' ' << &d << ' ' << &e << ' ' << &f << '\n';

  ++*p; // still UB, and it's possible for one of c, d, e, f to be changed
  
  std::cout << c << d << e << f << '\n'; // p - pointer to f, earlier it was pointer to a, b
  std::cout << *p << '\n'; // possibly not 2 already
        

}

