#include <iostream>

// IV. Inheritance

// 4.1. Public, private and protected inheritance


struct Granny {
//protected:
  int x;
//public:
  void f() {}

  friend int main(); // строгая мама запрещает общаться с доброй бабушкой
  friend struct Son;
};

// friend не наследуется

struct Mom: protected Granny {
  friend struct Son; // для ссына снят private
  int y;
  void g() {
    std::cout << x;
  }
};

struct Son: Mom {
  int x;
  void h() {}
  void hh(Granny& g) {
    std::cout << g.x; // 
  }
};


int main() {
  // Mom d;
  // d.x; // CE: Base - private
  
  Son s;
  s.x;
}


