#include <iostream>

// 2.6. Constants.

int main() {

  const int c = 2;

  char* a = "sgngkj";

  int x = 5;
  const int y = x;
  int const z = y;
  // const is другой тип, у которого часть операций исходного не определены

  int* p = &x;
  const int* pc = p; // pointer to constant int
                     // int* -> const int*
  int* p2 = pc; // CE
  *pc = 1; // CE
  pc = &y;
  *pc = 1; // CE

  int* const cp = p; // constant pointer to int
  cp = &y; // CE
  *pc = 1;


  int a = 5;
  const int* pa = &x;

  ++x;
  std::cout << *p;
  // записывать через константный указатель нельзя
  // а на тот же инт через неконст указатель можно
  


  // references
  int xx = 5;
  const int& r = x;  // xx == r, but without sth
  int const& rr = x; // the same
  int& r2 = r; // CE: trying to add right that you don't have


}

