#include <iostream>
#include <vector>

// II. Compound types

// 2.1. Pointers

int main() {
  /*
  // переменные хранятся в оперативной памяти (при первом приближении)
  int x = 3;
  //std::cout << &x << '\n'; // адрес переменной (адрес ячейки оперативной памяти)
                           // type of &x == int*
                           // &: T -> T*

  int* pp = &x;             // часть типа
  //std::cout << *p << '\n'; // *; T* -> T оператор
   
  pp + 1; // +: (T*, T) -> T*
  // если int, то увеличивается на 4
  // (смещается направо на 1)
  ++pp;
  --pp;
  
  std::vector<int> v = {1, 2, 3, 4, 5};

  int* p_int = &v[0];
  
  // std::cout << *p_int << '\n'; // разыменовывание операторов
  // std::cout << *++p_int << '\n';
  
  */

  int x = 1;
  double d = 0.2;
  
  std::cout << (&x < &d); // CE
  
  *++p; // UB
  // компилятор располагает переменные в порядке, в котором он сам хочет

  int y = 3;
  void* vp = &y;  // указатель на что угодно 
  // разыменовать void* нельзя
  // потом приводится к какому-то конкретному указателю

  NULL;    // integer
  nullptr; // pointer

  (long long)p;
  (int*)y;  // casts

}

