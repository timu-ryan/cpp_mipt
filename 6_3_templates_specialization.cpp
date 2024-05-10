#include <iostream>

// 6.3. Template specializations

template <typename T>
class vector {
  t* arr;
  size_t sz;
  size_t cap;
};

// Full specialization
template <>
class vector<bool> {
  char* arr;
  size_t sz;
  size_t cap;
};


template <typename T, typename U>
struct S {};

// Partial specialization
template <typename W>
struct S<int, W> {};

template <typename W>
struct S<W, int> {};

template <>
struct S<int, int> {};


template <typename T>
struct A {};

template <typename T>
struct A<T&> {
  A() = delete; // to chech which class was called
};

template <typename T>
struct A<const T> {};



int main() {
  S<int, int> s;
}

