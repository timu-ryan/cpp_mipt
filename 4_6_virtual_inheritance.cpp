#include <iostream>

// 4.6. Virtual inheritance.
// solves the diamond problem

struct Granny {
  int g = 1;
};

struct Mom: public virtual Granny {
  int m = 2;
};

struct Dad: public virtual Granny {
  int d = 3;
};

struct Son: public Mom, public Dad {
  int s = 4;
};

int main() {
  Son s;
  std::cout << s.g << '\n';
}

