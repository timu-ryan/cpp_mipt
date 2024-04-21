#include <iostream>

int main() {
  
  char* s = "abcdefghi"; // s в стеке - указатель на начало строки
                         // сама строка в статической памяти хранится
  // null terminated strings 
  '\0';

  const char* sss = "abcdefghi";
  char ss[] = "abcd\0efghi";
  std::cout << ss;
  // для указателей на char особые правила вывода в поток

  
  char a[5] = {'a', 'b', 'c', 'd', 'e'};
  a[5] = 'f'; // not '\0'
  char* p = a;
  std::cout << p;

}

