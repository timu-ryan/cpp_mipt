#include <iostream>

// 3.2. Access modifiers

class C {
private:
  int x{5};   // == (x = 5)
public:
  int xx;
  void f(int y) {
    std::cout << x + y;
  }

// неважно где объявлять
  friend void g(const C&, int);

  friend class CC; // все методы этого класса - друзья
};

void g(const C& c, int y) {
  std::cout << c.x + y + 1;
}

int main() {
  C c;

  // c.f(3);

  // std::cout << (int&)c; // can get private field


}



