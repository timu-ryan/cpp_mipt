#include <iostream>


class Mom {
  std::string name = "Kris";

public:
  void print_name() {
    std::cout << name << '\n';
  }
  friend class Son;
};

class Son: public Mom {
  // std::string name = "Kolya";
  
public:
  void print_name() {
    std::cout << name << '\n';
  }
};



int main() {
  Son s;
  s.print_name();
  // std::cout << s.name << '\n';

};

