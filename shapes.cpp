#include <iostream>

// TODO: it doesn't work at all

class Shape {
public:
  virtual double area() const = 0;
  virtual double perimeter() const = 0;

  ~Shape() = default;
};

class Rectangle: private Shape {
public: // private:
  double a;
  double b;
public:
  Rectangle(double a, double b): a(a), b(b) {}
  double area() const override {
    return a * b;
  }
  double perimeter() const override {
    return 2 * (a + b);
  }
  ~Rectangle() = default;
};

class Square: public Rectangle {
private: 
 // double a;
public:
  Square(double a): Rectangle(a, a) {};
  double area() const override {
    return a * a;
  }
  double perimeter() const override {
    return 4 * a;
  }
};

int main() {
  Square square(4.0);
  std::cout << square.area();
}


