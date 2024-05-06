#include <iostream>

// 5.2. More complicated examples with virtual functions.

struct Granny {
  virtual void f() const {
    std::cout << 1;
  };
};

struct Mom: Granny {
  /* void f() const {
    std::cout << 2;
  } */
private:
  // virtual funtions - run time decision
  // so it's not CE to call this function
  void f() const override {  // const меняет сигнатуру функции
                       // override значит что хочешь переопределить какую-то функцию из родителя
                       //
                       // если у родителя нет этой функции, то CE!! - в этом ее смысл - since c++11
                       // marked override, but does not override
                       //
                       // всегда когда переопределяем virtual function писать override
    std::cout << 2;
  }
  /* void f() const final {  // ниже никто эти функции не переопределяет
                             // ускоряет работу компилятора
                             // final means override
                             // don't need to write override

  };*/
};

struct Son: Mom {
  void f() const final {
    std::cout << 3;
  }
};

int main() {
  Mom m;
  Granny& g = m;
  g.f();

  // int override = 5; // контекстно-зависимые ключевые слова

  int x;
  std::cin >> x;
  Granny& gg = (x % 2 ? m : g);
  gg.f();

}


