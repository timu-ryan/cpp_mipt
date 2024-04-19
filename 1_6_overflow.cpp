#include <iostream>

// g++ -O2 1_6_overflow.cpp

int  main() {
  for (int i = 0; i < 300; i++) {
    std::cout << i << ' ' << i*12345678 << std::endl;
  }
}

