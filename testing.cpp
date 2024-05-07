#include <iostream>

struct Granny {
  double g = 1.1;
};

struct Mom: Granny {
  double m = 2.1;
};

struct Dad: Granny {
  double d = 2.2;
};

struct Son: Mom, Dad {
  double s = 3.1;
};

int main() {
  Son s;

//  std::cout << s.g << '\n';
  Mom m;
//  std::cout << m.g << '\n';

}

