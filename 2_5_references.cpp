#include <iostream>

// 2.5. References

/*
void f(int& a) {
  ++a;
}

void f(int a) {
  ++a;
}
*/

void swap(int& x, int& y){
  int t = x;
  x = y;
  y = t;
}

int& g(int& x) {
  return ++x;
}

int& f(int& x) {
  int y = ++x;
  return y;
  // возвращается ссылка на локальную переменную
  // error! mb not ce, but it's incorrect
}
// &x - взятие адреса переменной
// *p - разыменование указателя
// int* - тип указателя
//----------
// int& - ссылка

int& func() {
  static int y = 0;
  return y;
}

int& g2() {
  int* p = new int(1);
  return *p;
}

void (&g)(int) = f;

int main() {
  int& x = g();
  delete &x;

  int a = 0;
  int* pa = &a;
  int*& p2 = p;
  p = new int(5);
  delete p2;

  int arr[10];
  int (&b)[10]; // b === arr
  /*
  int x = 5;
  int& y = x;
  std::cout << y;
  f(y);
  std::cout << y;

  f(x);
  f(y);
  */

  // int& r; // CE - must be initialized with l-value
  // int x = 4;
  // g(x) = 6;
  // std::cout << x;

  // битая ссылка - danbling reference
  int x = 0;
  int& y = f(x); // UB
  while (true) {
    func();
  }
}

