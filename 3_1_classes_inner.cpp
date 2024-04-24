#include <iostream>


struct A {
  int x = 3;
  double d = 3.14;

  struct AA {
    char c;
  } a;
  // AA a;
  
  // Inner class
  struct {
    int d;
  } s;   // можно так создавать экземпляры

};

int main() {

  A s;

  using AA = A:AA;
  
  A::AA a;

  // Local class

  struct S {
    int x = 1;
    int y = 4;
  }

  S s;

}

