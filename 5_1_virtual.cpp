#include <iostream>

// V. Polymorphism and virtual functions.

// 5.1. Idea of virtual functions.

// виртуальная функция - это такая функция, что будучи вызванной 
// у объекта по ссылке на родителя, она все равно работает
// как версия от наследника ( то же самое в случае с указателями )

struct Base {
  virtual void f() {
    std::cout << 1;
  }
  virtual ~Base() = default; // обязательно делать виртуальный деструктор если
                             // есть какое-то наследование с виртуальными 
                             // функциями
};
// полиморфный тип - тот класс, у которого есть хоть одна виртуальная функция
// polymorphic type

struct Derived: Base {
  int* p = new int(5);
  void f() {   // тоже виртуальная, так как у родителя она виртуальная 
               // можно писать virtual, можно не писать 
    std::cout << 2;
  }
  ~Derived() {
    delete p;
  }
};

int main() {
  /*
  Derived d;

  Base& b = d;
  b.f();

  Base* bp = &d;
  bb->f();

  Base b_copy = d; // it isn't inharitance
  b_copy.f();
  */

  Base* b = new Derived(); // new вызывает конструктор и выделяет память, 
                           // а malloc просто выделяет память
  delete b; // утечка памяти -> нужно делать деструктор virtual!
            // delete - вызывает деструктор и освобождает память

};

