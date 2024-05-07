#include <iostream>
#include <vector>
// 5.3. Abstract classes and pure virtual functions.

// like interfaces

// статический полиморфизм - перегрузка функций
// а динамический полиморфизм - когда какая именно операция вызовется (как в этом примере с вектором)

struct Shape {
  virtual double area() const = 0;  // = 0 - pure virtual method
                                    // cannot declare Shape object
  virtual ~Shape() = default;
};

double Shape::area() const {
  return 0.0;
} // OK

struct Square: Shape {
  double a;
  Square(double a): a(a) {}
  double area() const override {
    return a * a;
  }
};

struct Circle: Shape {
  double r;
  Circle(double r): r(r) {}
  double area() const override {
    return 3.1415926536 * r * r;
  }
};

int main() {
  // Shape s; // CE
  /* Square sq(1.0);
  Shape& s = sq;
  s.area();
  */

  Circle c(1.0);
  // C.Shape::f(); - OK

  std::vector<Shape*> v;
  v.push_back(new Square(1.0));
  v.push_back(new Circle(1.0));

  for (Shape* s: v) {
    std::cout << s->area() << '\n';
  }
}


