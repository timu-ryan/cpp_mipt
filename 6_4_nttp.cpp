#include <iostream>
#include <array>
#include <vector>

// 6.4. Non-type template parameters.
// integer parameters (siz_t, char, bool, ints)

// templates - про кодогенерацию
// то есть классы с разными типами - разные типа - приведение не работает


template <typename T, size_t N>
class array {
  T arr[N];
};

template <size_t M, size_t N, typename Field = Rational>
class Matrix {};

template <size_t N, typename Field = Rational>
using SquareMatrix = Matrix<N, N, Field>

template <size_t M, size_t K, size_t N, typename Field>
Matrix<M, N, Field> operator*(const Matrix<M, K, Field>& a, const Matrix<K, N, Field>& b); 
// multiply operator for certain matrixes



// Template template parameters.

template <typename T, template<typename, typename> class Container = std::vector>  // вместо class - typename - OK
class Stack {
  Container<T, std::allocator<t>> container;
};



int main() {
  std::array<int, 100> a; // 100 - non-type template parameter


  // должны быть известны на этапе компиляции
  int x = 5;
  // Matrix<x, x> m; // CE

  const int cx = 5; // должно быть известно в момент компиляции
  Matrix<cx, cx> mm; // OK
                     
  std::cin >> xx;
  constexpr int y = xx;  // константа, известная в момент компиляции

  Matrix<5, 5> m;
  SquareMatrix<5> sm;

  Stack<int, std::vector> s; // CE - у вектора есть второй шаблонный параметр по умолчанию - аллокатор
}


