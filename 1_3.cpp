#include <iostream>
#include <vector>
// препроцессор целиком впихивает эту файл в программу

// 1.3. Declarations, definitions and scopes

//std::string str;

int a = 5; // global scope
//int x; // по умолчанию 0, "", [] - только для глобальных переменных

void f(int x);

class C;
struct S;
// enum E;
// union U;

namespace N {
  // при объявлении сразу нужны {}
  int x;
}

namespace N {
  int y;
}

// using N::x;
// using namespace N;


// One Definition Rule (ODR)
void f(int x); // declaration
int f(int x) { return x + 1; } // definition

void f(); // Function overloading

void g() { f(); }
void f() { g(); }


int main() {
  // using N::x; // now I can write just 'x'
  // using namespace N;
  // using std::cout;
  
  // using vi = std::vector<int>;

  // std::cout << N::x;
  // ::x  - global x or from namespace!

  // x; // unqualified-id
  // N::x; // qualified-id

  int a;


}






