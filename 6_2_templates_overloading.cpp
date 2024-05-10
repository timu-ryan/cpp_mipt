#include <iostream>

// 6.2. Template functions overloading.

/*
template <typename T, typename U = int>
U f(T x) {
  std::cout << 1;
  return 0;
}

void f(int x) {
  std::cout << 2;
}
*/

template <typename T>
void f(const T& x) {
  std::cout << 1;
}

template <typename T>
void f(T x) {
  std::cout << 2;
}
int main() {
  //int x = 0;
  //f(x);
  //f<int>(x);

  int x = 0;
  int& y = x;
  f(1);
}


