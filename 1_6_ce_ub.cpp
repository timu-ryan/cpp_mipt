#include <iostream>
#include <vector>
// 1.6. Compile-time error, runtime error and undefined behaviour


// лирическое отступление
// g++ 1_6.cpp
// clang++ 1_6.cpp
//
// g++ -02 1_6.cpp
// g++ -Wunused-value 1_6.cpp
// g++ -Wall 1_6.cpp
// g++ -Wpedantic 1_6.cpp
// g++ -Werror 1_6.cpp    means warnings -> errors
// g++ -Wno-error=unused-value 1_6.cpp

int x;
#pragma gcc diagnostic push("-Wno-unused-value")
  std::cout << x;
#pragma gcc diagnostic pop
  // в конкртеном куске кода можно делать ошибки

int main() {
  // ликсические, синтаксические, семантические
  // синтаксическое дерево операторов
  

  // CE

  // \\; // - лексическая ошибка
  
  // x +; // - синтаксическая ошибка

  // RE
  // Segmentation fault (segfault) - обращение к недопустимой памяти 
  std::vector<int> v(10);
  //v[50'000] = 1;
  
  // Floating point exception
  //5 / 0
  // 5 / 0.0f == inf
  
  // Aborted - by os
  //v.at(10) = 1;
  //v[-1] = 1000;
  


  // Undefined behaviour (UB)
  int x;
  std::cout << x;
  v[10] = 1; // UB
}


