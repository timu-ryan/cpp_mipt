#include <iostream>
#include <cstring>

// 3.4. Assignment operator, Rule of three
// если в классе есть что-то нетривиальное из трех:
// конструктора, оператора присваивания, деструктора
// то нужно все реализовывать

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
  String(size_t n, char c): String(n) {
    memset(arr, c, n);
  }
  String(std::initializer_list<char> list)   // {'a', 'b', 'c', 'd'}
      : arr(new char[list.size() + 1]
      , sz(list.size())
      , cap(sz + 1) {
    std::copy(list.begin(), list.end(), arr);
    arr[sz] = '\0';
  }

  String(const String& other): arr(new char[other.cap]), sz(other.sz), cap(other.cap) {
    memcpy(arr, other.arr, sz + 1);
  } // copy constructor
    
  // copy and swap
  // это не учитывает присваивание самому себе
  /*String& operator=(const String& other) {
    // this->~String(); // UB: один раз деструктор должен вызываться
    if (this == &other) return *this;
    delete[] arr;
    sz = other.sz;
    cap = other.cap;
    arr = new char[other.cap];
    memcpy(arr, other.arr, sz + 1);
    return *this; // this - pointer to yourself
  }*/

  // Copy and swapidiom
  String& operator=(String other) {
    swap(other);
    return *this;
  }

  void swap(String& other) {
    std::swap(arr, other.arr);
    std::swap(sz, other.sz);
    std::swap(cap, other.cap);
  }

  ~String() {
    delete[] arr;
  }
};


int main() {
  String s = {'a', 'b', 'c', 'd', 'e'};
  String s2{2, 'a'};
}

