#include <iostream>

// 3.5. Const, static and explicit methods.

struct S {
  char arr[10];
  mutable int x = 1; // например чтобы вести счетчик
  // каждая функция принимает this
  void f() const {
    // ++x;
    std::cout << "Hi";
  }
  void f() {            // можно перегружать по константности
    std::cout << "2";
  }

  char& operator[](size_t index) {
    return arr[index];
  }

  const char& operator[](size_t index) const {
    return arr[index];
  }

};

// Static methods doesn't relate to object, it relate to the whole class

struct ST {
  // не объекты класса, а относятся ко всему классу
  static int x;
  static void f() {
    std::cout << "Hi!";
  }
}

// один экземпляр на всю программу (например подключение к базе данных)
struct Singleton {
private:
  Singleton() {}
  static Singleton* ptr;

  Singleton(const Singleton&) = delete;
  Singleton& operator=(const Singleton&) = delete;
private:
  static Singleton& getObject() {
    if (ptr == nullptr) {
      ptr = new Singleton();
    }
    return *ptr;
  }
};
Singleton* Singleton::ptr = nullptr;


// строгая типизация: разные инты
struct Latitude {
  double value;
  explicit Latitude(double value): value(value) {}
  // explicit запрещает неявно вызывать конструктор

  // если конструктор от одного элемента, считается, что его лучше делать explicit

  // оператор приведения типа
  // может быть вызван неявно (но с c++11 можно делать explicit)
  // but we can use static_cast
  explicit operator double() const {
    return value;
  }
}

// конструктор в string от одного char нужно делать explicit
// потому что можно будет например вызываться от int
//
// или есть конструктор от int и передать туда 'a' -> строка 97 - 'a' code
//
// operator bool тоже нужно делать explicit


// contextual conversions 
// тернарный оператор, if, while - рассматривает и explicit конверсии

struct Longitude {
  double value;
  explicit Longitude(double value): value(value) {}
}


// литеральные суффиксы
3.0f
// определить оператор '

class BigInteger {};

BigInteger operator""_bi(unsigned long long x) {
  return BigInteger();
}


int main() {
  const S ss;
  S s;
  const S& r = s;

  r.f();
 
  // не нужно создавать объект, статическое относятся к всему классу
  ST::f();
  // внутриклассовая инициализания неконстантых статических членов запрещена
  int S::s = 1;
  // если static const, то внутри класса можно инициализировать

  Singleton& s = Singleton::getObject();

  "abcdefg"s; // s means it's std::string (no const char*)
  BigInteger bi = 1_bi;
}



