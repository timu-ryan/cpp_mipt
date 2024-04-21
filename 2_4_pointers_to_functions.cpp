#include <iostream>
#include <algorithm>

bool cmp(int x, int y) {
  return x > y;
}

void f(int) {}
void f(double) {}


void point(int x = 3, int y = 3); // default values, only trailing elements
// variadic functions - принимает любое число аргументов любых типов
// ... 

int main() {

  int a[5] = {5, 3, 8, 2, 9};

  std::sort(a, a + 5); // указатель на начало, указатель на след после последний 
  
  bool (*p)(int, int) = &cmp;  // можно просто писать 'cmp' without &
                               // function to pointer convertion
  std::cout << p; // странно выведет, либо 0, либо 1, но это нормально
                  // можно сделать (void*)p - находится в области text
  std::cout << (void*)p << '\n';
  std::sort(a, a+5, &cmp);
  // lambda functions
  for (int i = 0; i < 5; i++) {
    std::cout << a[i];
  }

  void (*p)(int) = &f;
  void (*p2)(double) = &f; // function overloading
                           // it's ok

  // у функции которая не определена нет адреса


}


