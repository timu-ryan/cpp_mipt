#include <iostream>

// diamond problem

struct Granny {
  int g = 1;
};

struct Mom: virtual Granny {
  int m = 2;
};

struct Dad: virtual Granny {
  int d = 3;
};

struct Son: Mom, Dad {
  int s;
};

int main() {
  Son s;
  std::cout << s.g;
}

