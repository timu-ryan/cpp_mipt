#include <iostream>
#include <cstring>

// 3.3. Constructors and destructors. (ctor | dtor)

class Complex {
  double re = 0.0;
  double im = 0.0;

  /*
  Complex(double real) {
    re = real;
  }
  
  Comlex(double re) {
    this->re = re;
  }
  */
  
  // Member initializer lists
  // иначе сначала нулем проинициализируется
public:
  Comlex(double real);      // : re(real) { } || re(re)
  Comlex(double re, double im): re(re), im(im) {}
}

Complex::Comlex(double re): re(re) {}



class String {
  char* arr = nullptr;
  size_t sz = 0;
  size_t cap = 0;
public:
  String() = default;
  // String() {}  // default constructor
  String(size_t n, char c): arr(new char[n+1]), sz(n), cap(n + 1) {
    memset(arr, c, n);
    //std::fill(arr, arr + sz, c); // заполнить n байт значением c
                                 // быстрее чем for
    arr[sz] = '\0';
  }
  String(std::initializer_list<char> list)
      : arr(new char[list.size() + 1]
      , sz(list.size())
      , cap(sz + 1) {
    std::copy(list.begin(), list.end(), arr);
    arr[sz] = '\0';
  }

};

// {} :
//    1. initializer_list
//    2. construnctor
//    3. aggregate initializetion
//
//

int main() {

  Complex c(5.0); // direct initialization
  Complex c2 = 6.0; // не присваивание, а вызов конструктора
  Complex c3{7.0};
  Complex c4 = {8.0};

  // с конструкторами агрегатная инициализация не работает

  std::vector<int> v = {1, 2, 3, 4, 5};

  String s = {'a', 'b', 'c', 'd', 'e'};
  String s2('2', 'a');

  Complex c; // implicity declared default constructor
             // CE if other contructors exist
}

