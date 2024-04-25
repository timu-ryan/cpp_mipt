#include <iostream>

class C {
private: 
  class Inner {
  public:
    int x = 1;
  private:
    int y = 2;
  };

public:
  Inner f() {
    return Inner();
  }

};



int main() {
  C c;
  std::cout << c.f().x; // 1
                        // OK
                        // we only can't call sth in private
  

}

