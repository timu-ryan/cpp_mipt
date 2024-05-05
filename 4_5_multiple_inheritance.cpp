#include <iostream>

// 4.5. Multiple inheritance

// diamond problem
class Granny {
public:
  int g = 0;
};

class Mom: public Granny {
public:
  int m = 10;
};

class Dad: public Granny {
public:
  int d = 20;
};

class Son: public Mom, public Dad {
public:
  int s = 3120;
  void f() {
    std::cout << s << '\n' << Mom::g << ' ' << m << ' ' << d << '\n'; 
  };
  // reference to g is ambiguous
};


int main() {
  Son s;
  s.f();

};

