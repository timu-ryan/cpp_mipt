#include <iostream>
#include <cstdio> // the same with <stdio.h>

void swap_incorrect(int a, int b);
void swap(int* a, int* b);

int main() {
  int x = 1;
  int y = 2;

  swap_incorrect(x, y);
  std::cout << x << ' ' << y << '\n';

  swap(&x, &y);
  std::cout << x << ' ' << y << '\n';

  printf("%d", x);
  scanf("%d", y);
}


void swap_incorrect(int a, int b) {
  int temp = a;
  a = b;
  b = temp;
}

// сигнатура функции
void swap(int* pa, int* pb) {
  int temp = *pa;
  *pa = *pb;
  *pb = temp;
}

