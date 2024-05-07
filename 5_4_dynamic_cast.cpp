#include <iostream>

// 5.4. RTTI and dynamic cast

// RunTime Type Information

// c++filt

// вирутальные функции - функции, у которых решение которую вызвать,
// принимается в runtime

struct Base {
  int x = 0;
  virtual void f() {}
  virtual ~Base() = default;
};

struct Derived: Base {
  int y = 0;
  void f() override {}
};


int main() {
  Derived d;
  Base& b = d;

  typeid(b); // return std::type_info
             // оператор сравнения и метод name

  std::cout << typeid(b).name() << '\n'; // Derived
                                         // 7 - length of name
  // от наследника к родителю всегда можно делать dynamic cast
  // even if type is not polymorphic

  // dynamic_cast нужен когда нетривиальности с виртуальностями
  // лучше static_cast
  
  // dynamic_cast может кастовать наследников в бок mom to dad (mom must be polymorphic)
  // исходный тип должен быть полиморфым

  // виртуальность нужна, если используем
  // наследника по ссылке на родителя

  int x = 0;
  std::cout << typeid(x).name() >> '\n'; // i

  Derived* pd = dynamic_cast<Derived*>(&b);
  if (pd) {  // можно например сравнивать фигуры между собой
             // если не привел - returns nullptr
  // работает только для типов с виртуальными функциями
  //
  // если виртуальным функций нет, то dynamic_cast - CE
  }
}

