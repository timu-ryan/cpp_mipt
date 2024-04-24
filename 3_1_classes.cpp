#include <iostream>

// III. Basics of OOP
//
// (object-oriented programming)
//
// 3.1. Classes and structures, encapsulation.

// размер структуры равер размеру полей с точностью до выравнивания
// int int -> 8
// int -> 4
// int double -> 16
struct S {
  int x;    // значение по умолчанию
  double d = 3.14;
  // поля и методы, юзинги
  // using -> types, variables, namespaces

  using string = std::string;
  
  void f(int y) {
    std::cout << x + y << '\n';
    ff();
  }

  void ff();
  void g() {
    // this - указатель на объект
    (*this).x;
    this->x;
  }
  // don't must do forward declaration


  struct SS {
    char c;
  }

};
// объявлять внутри класса
// определить вне класса

void S::ff() {
  std::cout << 'whaaat\n';
}


int main() {
  S s;
  
  std::cout << s.x << '\n';
  s.x = 2;

  S s2{2, 4.5}; // Aggregate initialization
  // если есть конструкторы или приватные поля -> не работает

  S* p = &s;
  p->x = 4;
  p->f(5);

  s.f(5);

}

