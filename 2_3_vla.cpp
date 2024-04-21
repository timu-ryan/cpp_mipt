#include <iostream>

// variable length array

// the length defines in run time

int main() {
  // too slow 
  // each time 
  int n;
  std::cin << n;
  // flag -Wpedantic // c++ standart
  int a[n];
  for (int i = 0; i < n; i++) {
    a[i] = i;
  }

}

