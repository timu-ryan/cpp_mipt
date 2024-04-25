#include <iostream>

void initialize_matrix(int& a) {
  std::cout << a[0][0];
}

void print_matrix();

int main() {
  int array[10][5];
  array[0][0] = 3;
  initialize_matrix(array);

}
// (int)((int (*)[5])(& array))
