#include <iostream>

void f(int**) {}       // 
void f(int(*)[5]) {          // void f(int(*a)[5]) {
  std::cout << 1;
}   // указатель на массив из 5 интов
//void f(int* [5]){}   // 

int main() {
  
  int arr[5];
  f(&arr);


  int a[5][5];

  int* b[5]; // Array of 5 pointers to int 
  int (*c)[5]; // Pointer to array of 5 ints

}

