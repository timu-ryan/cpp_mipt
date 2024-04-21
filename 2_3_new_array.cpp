#include <iostream>
#include <vector>

int main() {
  
  int* a1 = new int[100]; // 100 ints
  int* a2 = new int(100); // 1 int with the value 100

  int* a3 = new int[100]{}; // [0, 0, 0...] 

  int* a = new int[100'000]; 
  
  // std::cout << *(a-2); // 401410  ~=sizeof(a) 

  delete[] a;
  // delete a; // UB


  std::vector<int> v(10);  // указатель на динамическую память (mb)
                           // в стеке лежит указатель
  // вектор сам подчищает память
  // delete[] &v[0]; // error: double free
  v[-1] = 500000; // там хранится размер массива

}

