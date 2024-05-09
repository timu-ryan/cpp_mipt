#include <iostream>

struct Base {
  int x;
  // оставить функцию без определения - ошибка линкера 
  // virtual void f();
  // static virtual void f() {} // CE
};

struct Derived: Base {

};

int main() {
  Derived d;
  
}

