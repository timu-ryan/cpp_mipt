#include <iostream>

// type conversions
//
// c-style cast
// static cast - most popular
// dynamic cast
// reinterpret cast
// const cast

int main() {
  // static_cast
  int x = 0;
  static_cast<double>(x);

  // reinterpret_cast
  // возьми биты одного типа и прочитай как биты второго типа 
  // без перекодировки
  
  /*
  long long y = 1729;
  double& d =  reinterpret_cast<double&>(y); // UB
  std::cout << reinterpret_cast<double&>(y); // UB
  // to ref

  int* p = &x;
  std::string* str = reinterpret_cast<std::string*>(p);
  std::cout << *str; // UB
  */

  // const_cast
  const int c = 5;
  int& cc = const_cast<int&>(c);
  cc = 7;
  std::cout << c << ' ' << cc << '\n';  // 5 7  (UB)
                                        

  // c-style cast
  double d = (double) x;  // baaad, never use it, all casts = c-style cast



}

