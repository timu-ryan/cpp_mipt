#include <iostream>

int main() {

  int* a[10];
  int (*b)[10]; // указатель на массив

  // go right when you can, go right when you must
  void (*pf)(int); // pointer to function which takes int, returns void
  
  void (*pfa[10])(int);

  void (*(*pff[10])(int))(int);
  
}

