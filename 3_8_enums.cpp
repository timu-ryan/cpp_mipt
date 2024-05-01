#include <iostream>

// 3.8. Enums and enum classes


/*  - too old 
enum E {
  White, // 0
  Gray, // 1
  Black // 2
};
*/


enum class E : int8_t {
  White = 2,
  Gray,           // 3
  Black;          // 4
}; // если есть переменная, которая может принимать несколько значений
// можно делать static_cast

int main() {
  // E e = White;
  // int ee = White;
  
  E e = E::White;
  std::cout << e;
}
