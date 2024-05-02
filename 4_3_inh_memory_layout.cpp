#include <iostream>

// 4.3. Memory layout, constructors and destructors in case of inheritance

// EBO: empty base optimization


// наличие методов не влияет на размер (если это не виртуальные методы)
struct Base {
  void f() {}
  int x;
  Base() = default;
  Base(int x): x(x) {}
  ~Base() {}
};

struct Derived: Base {
  using Base::Base; // унаследован конструктор
  double y;         // конструкторы копирования не наследуются
                    // (еще есть конструктор перемещения)
  void g() {}
  Derived(double y): Base(0), y(y) {}
  ~Derived() {}

  // template <typename... Args>
  // Derived(int y, Args... args): Base(Args...), y(y) {}
};

// Granny()
// Mom()
// Son()
// ...
// ~Son() // еще корректно обращаться к полям родиетелей
// ~Mom()
// ~Granny()


// пустая структура занимает 1 байт
struct Empty {};


int main() {
  std::cout << sizeof(Derived);
  
  Derived d = 3.14; // CE
                    // сначала полностью создается объект родителя
                    // только потом вызывается конструктор родителя
                    // потом уже потомки
  
};

