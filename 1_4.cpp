#include <iostream>

// 1.4. Expressions and operators
//
// statement -> declaration, expression, control statement

// birary operators:
// + - * / % << >> | & ^ && || < > == != <= >= <=> (since c++20) 
// && || - вычисляются лениво (левая часть вычисляется первой правая может не вычислить)
// try to find true
// return rvalue

//  = += -= *= /= %= <<= >>= \= ^= &=
// return lvalue - after operations you can assign again


// a++ - rvalue  and
// ++a - lvalue
// постфиксные инкременты приоритетнее

// тернарный 
// x ? a : b

void f();

int main() {
  int x = 1;
  std::cout << ++++x;
}

void f() {
  int x = 1;
  int y, z;
  x = y = z; // == x = (y = z) - правоассоциативные - lvalue
  x + y + x; // == (x + y) + z - левоассоциативные - rvalue
  
}

