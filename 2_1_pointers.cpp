#include <iostream>

// II. Compound types
//
// 2.1. Pointers

int main() {
  // переменные хранятся в оперативной памяти при первом приближении
  int x = 0;
  std::cout << &x << '\n'; // адрес переменной (адрес ячейки оперативной памяти)
                           // type of &x == int*
                           // &: T -> T*

  int* p = &x;             // часть типа
  std::cout << *p << '\n'; // *; T* -> T оператор


}

