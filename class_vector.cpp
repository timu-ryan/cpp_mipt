#include <iostream>
#include <cmath>
#include <compare>

class Vector {
private:
  double x = 0.0;
  double y = 0.0;
  double z = 0.0;

public:
  Vector() {}
  Vector(double x, double y, double z): x(x), y(y), z(z) {}
 
  Vector& operator=(const Vector& other) & {
    if (this == &other)
      return *this;
    x = other.x;
    y = other.y;
    z = other.z;
    return *this;
  }

  Vector& operator+=(const Vector& other) {
    x += other.x;
    y += other.y;
    z += other.z;
    return *this;
  }

  friend Vector operator+(const Vector& a, const Vector& b) {
    Vector result = a;
    result += b;
    return result;
  }

  Vector& operator-=(const Vector& other) {
    x -= other.x;
    y -= other.y;
    z -= other.z;
    return *this;
  }

  friend Vector operator-(const Vector& a, const Vector& b) {
    Vector result = a;
    result -= b;
    return result;
  }

  friend bool operator<(const Vector& a, const Vector& b) {
    return a.get_length() < b.get_length();
  }

  friend bool operator==(const Vector& a, const Vector& b) {
    return a.x == b.x && a.y == b.y && a.z == b.z;
  }

  std::partial_ordering operator<=>(const Vector& other) const = default;

  friend std::ostream& operator<<(std::ostream& os, const Vector& v); 
  
  double get_length() const {
    return std::sqrt(x * x + y * y + z * z);
  }

  ~Vector() {}
};


std::ostream& operator<<(std::ostream& os, const Vector& v) { 
  std::cout << '(' << v.x << ", " << v.y << ", " << v.z << ')';
  return os;
}




int main() {
  int ax, ay, az;
  int bx, by, bz;
  std::cin >> ax;
  std::cin >> ay;
  std::cin >> az;

  std::cin >> bx;
  std::cin >> by;
  std::cin >> bz;
  Vector v1(ax, ay, az);
  Vector v2(bx, by, bz);
  std::cout << "sum equals to" << (v1 + v2) << '\n';
  //Vector v1(2, 2, 2);
  //Vector v2(1, 1, 1);
  /*std::cout << v1 << '\n';
  std::cout << v2 << '\n';

  std::cout << v1 + v2 + v1 << '\n';
  std::cout << v2 - v1 << '\n';
  std::cout << (v1 < v2) << '\n';
  std::cout << (v1 > v2) << '\n';
  std::cout << (v1 == v2) << '\n';
  std::cout << (v1 == v1) << '\n';
*/
}

