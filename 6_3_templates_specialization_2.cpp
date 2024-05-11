#include <iostream>

// 6.3. 

// templates - про кодогенерацию
// 20 ноября - 11 мая

template <typename T, typename U>
void f(T, U) {
  std::cout << 1;
}

// для функций нет частичной специализации

template <typename T>
void f(T, T) {
  std::cout << 2;
}

template <>
void f(int, int) {
  std::cout << 3;
}

void f(int, int) {
  std::cout << 4;
}

int main() {
  f(0, 0);
}

