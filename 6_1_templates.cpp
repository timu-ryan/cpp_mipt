#include <iostream>
#include <map>
#include <vector>

// VI. Templates.

// 6.1. Idea of templates, basic examples.

// template <class T> // - old style - almost the same

template <typename T>
void swap(T& x, T& y) {
  T t = x;
  x = y;
  y = t;
}

template <typename T>
int max(T x, T y) {
  return x > y ? x : y;
}

template <typename T>
class vector {
  T* arr;
  size_t sz;
  size_t cap;
};

template <typename T>
struct less {
  bool operator()(const T& x, const T& y) const {
    return x < y;
  }
};

template <typename T>
struct greater {
  bool operator()(const T& x, const T& y) const {
    return x > y;
  }
};

// since c++11
template <typename T>
using mymap = std::map<T, T, std::greater<T>>;

// mymap<int> m;

// since c++14 - template variables
// since c++20 - templates concepts

// T - metavariable

int main() {
  int a = 0;
  long long b = 1;
  swap(a, b);  // CE
               // firstly generate code
  swap<long long>(a, b); // OK

  std::vector<int> v;
  // std::vector<double> v2 = v;
}

