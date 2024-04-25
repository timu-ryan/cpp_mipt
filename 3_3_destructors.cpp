#include <iostream>
#include <cstring>

// 3.3. Constructors and destructors. (ctor | dtor)

class Complex {
  double re = 0.0;
  double im = 0.0;


public:
  Comlex(double real);      // : re(real) { } || re(re)
  Comlex(double re, double im): re(re), im(im) {}

  // не нужно писать деструктор
}

Complex::Comlex(double re): re(re) {}

// приватность проверяется до перегрузок!
// сначала перегрузки, потом (= delete)

class String {
  char* arr = nullptr;
  size_t sz = 0;
  size_t cap = 0;
private:
  String(size_t n): arr(new char[n + 1]), sz(n), cap(n+1) {
    arr[sz] = '\0';
  }
public:
  String() = default; // since c++11
  String(char) = delete; // since c++11 // до этого делали в приват чтобы не вызывали
  /*
    
  String(size_t n, char c): arr(new char[n+1]), sz(n), cap(n + 1) {
    memset(arr, c, n);
    //std::fill(arr, arr + sz, c); // заполнить n байт значением c
                                 // быстрее чем for
    arr[sz] = '\0';
  }
  */
// делегирующие конструкторы since c++11
  String(size_t n, char c): String(n) {
    // this->String(n); // CE
    memset(arr, c, n);
  }
  String(std::initializer_list<char> list)   // {'a', 'b', 'c', 'd'}
      : arr(new char[list.size() + 1]
      , sz(list.size())
      , cap(sz + 1) {
    std::copy(list.begin(), list.end(), arr);
    arr[sz] = '\0';
  }

// конструктор копирования:
// const чтобы работало и для const и для non-const
                                // генерируется по умолчанию but UB
  String(const String& other): arr(new char[other.cap]), sz(other.sz), cap(other.cap) {
    memcpy(arr, other.arr, sz + 1);
    // для примитивных типов memcpy - копирует побайтово(много байтов) - быстрее
    // std::copy - копирует честно
    // memmove(arr, other.arr, sz + 1); // в случае если диапазоны пересекаются
  } // copy constructor
       
  
// COW
// COW string - copy on write string - ленивое копирование

// делигирующие конструкторы

  ~String() {
    delete[] arr;
    // деструктор вызывается когда кончается область видимости объекта в порядке,
    // обратном порядке объявлению полей
  }
};

int x = 0;
struct C {
  int& r = x; // нельзя сгенерировать конструктор по умолчанию
  const int c;

  C(int y): r(y) {
    //  r = y; // x = y
  } 
};

struct CC {
  const int& r; 
  // константные ссылки можно инициализировать rvalue
  // но только в качестве локальных переменных (в функциях)
  // в полях классов нельзя
  CC: r(5) {}
}

int main() {
  String s = {'a', 'b', 'c', 'd', 'e'};
  String s2{2, 'a'};

  // s.~String(); // UB - double call
  // s.String(); // CE

  // String s5 = s5;
}

