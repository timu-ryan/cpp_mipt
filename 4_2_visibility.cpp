#include <iostream>

// 4.2. Visibility and accessibility of friends and methods.


/*
struct Base {
  int x;
  void f(int) {
    std::cout << 1;
  };
};

// expressions can't be inside classes


// все поля всегда наследуются, но доступа к ним может не быть

// int x
// using some_namespace::x  - равноправное объявление x

struct Derived: Base {
private:
  using Base::f; // useful to get private fields in derived class
public:
  int y;
  void f(double) {  // it's not function overloading
                    // another function in another scope
    std::cout << 2;
  }
};
*/


// приватность проверяется после разрешений перегрузки
//
// сначала кондадаты на перегрузку из области видимости
// потом кто перегружается (overloading resolution)
// потом приватность


struct Granny {
  int x;
  void f();
};

struct Mom: private Granny {
  // friend struct Son;
  friend int main();
  int x;
};

struct Son: Mom {
  int x;
  void f(::Granny& g) { // Granny - private namee
    std::cout << g.x;   // нужно писать ::
  }
};


int main() {
  // Derived d;
  // d.f(0);         // 2
  // d.Base::f(0);   // 1
  
  Son s;
  // s.Mom::Granny::x;
  s.Granny::x;

}

