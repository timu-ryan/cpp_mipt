#include <iostream>

// программа состоит из объявления, выражения и управляющие конструкции
// 1.5. 
int main() {
  
  if () statement;
  if(/* bool-expression */) {
  
  } else {

  }
  
  int x;
  std::cin >> x;
  switch () {
  case 1: 
    std::cout << "AAAA";
    break; // без break будет выполняться всё ниже
  case 2:
    std::cout << "BBBB";
    break;
  default:
    std::cout << "CCCC";
  }

  while () {

  }

  do {

  } while ();

  int x = 0; // = - не оператор присваивания, часть синтаксиса объявления

  for (declaration | expression; bool_expression; expression) {
    break;
    continue; // control statements
  }

  if (int a = 0; y > a) { // since c++17

  }

lebel:
  ++x;
  std::cout << x << '\n';

  goto label;  // применение с освобождением памяти в случае ошибки в функциях
               // in another inner scope we cant do

  try catch;
}



