#include <iostream>



int main() {

  int* p = new int(8);

  int** pp = &p;

  const int** cpp = pp; // CE


}

