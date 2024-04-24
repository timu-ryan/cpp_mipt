#include <iostream>

// почему ссылкам нельзя присваивать rvalue

// CE - случилось бы преобразование типов - новая локальная переменная

void g(size_t& y) {
  ++y;
}

int main() {

  int x = 0;
  g(x);

  const double& d = x;

  std::cout << x;

  

}

