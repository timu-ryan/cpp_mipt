#include <iostream>

int f(int x) {
  return x*x;
}
void ff(int& x) {
  x *= x;
}

int some_function(int& a);

int main() {
  int x = 4;
  int y = 9;
  std::cout << f(x) << '\n';

  ff(y);
  std::cout << y << '\n';

  while(true) {
    std::cout << f(x) << '\n';
  }

}

