#include <iostream>

// htop

// garbage collector

void f() {
  int* p = new int(5);
  std::cout << p << ' ' << *p << '\n';
  // delete p;
} 

int main() {
  
  while (true)
    f();
}

