#include <iostream>

// 2.2. Kinds of memory
// static
// dynamic
// automatic

// RAM - random access memory

void f() {
  static int x = 0;  // local static variable
                     // инициализируется единожды и хранится в data
                     // адрес всегда один
                     //
                     // память под него зарезервирована заранее 
                     // в Compile time
                     //
                     // новый x не создается, он один на всю программу
  std::cout << ++x << '\n';
  f();
}

int main() {
  
  int a[1000000000];        // sigfault 
  static int a2[100000000];  // OK - data выделяется заранее

  int x = 5; // на стеке хранится
  int i = 0;

  // dynamic memory
  int* p = new int;

  delete p;


  int* pb = new int(5);

  delete pb;


  int* pa = new int[10000];
  
  delete[] pa;


  int* pc = new int[10000]{};

  delete[] pc;

  // if you'll delete not your pointer -> sigfault | UB
  
  // second delete of the same -> RE -> aborted
  // formal -> all these is UB
  

  
  // data - part of memory

  static int xx = 0; // отдельно от стека
                    // один и тот же адрес на протяжении
                    // выполнения всей программы
}












