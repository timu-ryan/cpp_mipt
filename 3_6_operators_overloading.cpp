#include <iostream>

#include <compare>

// 3.6. Operators overloading


class Comlex {
  double re = 0.0;
  double im = 0.0;

  Complex& operator=(const Complex& other) & {
   // &  применим только к lvalue
   // && rvalue
   // a + b = c // ok without &
   // since c++11
  }

  Complex() {}
  Complex(double re, double im): re(re), im(im) {}
  Complex(double re): re(re) {}

  // одностороннее будет -> вне класса
  // Complex operator+(const Complex& other) const {
  //   return Complex(re + other.re, im + other.im);
  // }
  

  // spaceship operator
  // Three-way comparison (since c++20)
  std::weak_ordering operator<=>(const Complex& other) const = default;
  // автоматически объявятся лексиграфически все другие если объявлен <
  // компилятор сам определяет если возвращает 
  // weak_ordering  - равны, но мб не полностью
  // strong_ordering
  //
  // еще есть part_ordering
  // weak_ordering returns: 1. less
  //                        2. equivalent
  //                        3. greater
  //
  //    return std::weak_ordering::less;
  
  /*
  bool operator==(const Complex& other) const = default;

  // как сравнить char* со string
  std::weak_ordering operator<=>(const char* other) const {
    return std::weak_ordering::equivalent;
  }  // в обратную сторону тоже будет работать (только с этим оператором)
  */


  std::weak_ordering operator<=>(const Complex& other) const {
    return std::weak_ordering::equivalent;
  }

  // все операторы доопределяются, кроме == и != (если определен <=>)
  // надо тоже написать для них = default
  // потому что неоптимально (например в строке чтоы проверялись сначала размеры
  // вместо того, чтобы все проверять)


  Complex& operator+=(const Complex& other) {
    re += other.re;
    im += other.im;
    return *this;
  }
}

// const в возвращающем типе не надо
Complex operator+(const Complex& a, const Complex& b) {
  Complex result = a;
  result += b;
  return result;
  // если возвращать локальную переменную, без expressions 
  // то компилятор отимизирует
  // RVO - return value optimization
}

// оператор вывода в поток string
// - внешняя функция
std::ostream& operator<<(std::ostream& out, const String& str);
std::istream& operator>>(std::istream& in, String& str);

bool operator<(const Complex& a, const Complex& b) {
  return a.re < b.re || a.re == b.re && a.im < b.im;
}

bool operator>(const Complex& a, const Complex& b) {
  return b < a;
}

// оператор < используется в sort


Struct UserId {
  int value = 0;

  UserId& operator++() {
    ++value;
    return *this;
  }
  UserId operator++(int) {  // фейковый элемент int
    UserId copy = *this;
    ++value;
    return copy;
  }
};


struct Greater {
  bool operator()(int x, int y) const {
    return x > y;
  }
} // объект компаратор
  // Функтор - класс называется так
  // Функциональные объеты



int main() {
  Comlex c;

  c + 3.14;  // == c.operator+(3.14);
  3.14 + c;

  std::vector<int> v(10);
  // ...

  std::sort(v.begin, v.end, Greater());
}

