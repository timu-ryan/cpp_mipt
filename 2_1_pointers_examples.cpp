#include <iostream>

int main() {
  int a = 0;
  int* p = &a;
  std::cout << p << " pointer to int" << '\n';
  int** pp = &p;
  std::cout << pp << " pointer to int*" << '\n';
  std::cout << *pp << ' ' << **pp << '\n';
  
  std::cout << sizeof(p) << '\n'; // 8 byte
                                  
  *p = 1; // lvalue
          // same a = 1
  
  // &(a + 1);  // CE
  p+=1;
  // std::cout << p << ' ' << *p << ' ' << *(p - 1);
}

