#include <iostream>

// 2.3. Arrays

void f(int* a) {
  std::cout << "Hi! " << a[2]; 
}
// f == ff

void ff(int a[3]) {
  // при передаче в функцию массив превращается в указатель
  std::cout << "Boom!"
}

int main() {
  /*
  int a[5];
  int a1[] = {1, 2, 3, 4, 5};

  int a2[5] = {1, 2};  // [1, 2, 0, 0, 0]
  int a3[5] = {};      // [0, 0, 0, 0, 0]
  
  int a4[5]{1, 2};      // [1, 2, 0, 0, 0]
  int a5[5]{};          // [0, 0, 0, 0, 0]

  a[1] = 1;
  a[5] = 23; // UB
  a[100000] = 34; // sigfault

  a[-1] = 1; // UB   

  for (int i = 0; i < 5; i++) {
    std::cout << a[i];
  }
  
  int a5[10'000'000]{}; // sigfault - stack overflow
  
  static int a5[10'000'000]{};  // OK

*/

/*
  int a[5] = {1, 2, 3, 4, 5};
  std::cout << *a;    // 1
  std::cout << *(a + 3);   // 4       Array to pointer convertion

  a[2] == *(a + 2); // the same!

  int *p = a + 3;
  p[-1] == 3; // Ok, equivalent to *(p-1)

  2[a]; // Ok, equivalent to *(2+a)
*/

  int a[5] = {1, 2, 3, 4, 5};
  // std::cout << *(a + 3);

  int b[5]{};

  //a = b; // CE
  //++a; // CE
  //a += 1; // CE
  
  int* p = a;
  std::cout << sizeof(p) << ' ' << sizeof(a);  // 8 20
  
  f(a);




}



