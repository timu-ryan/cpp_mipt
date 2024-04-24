#include <iosream>

int main() {
  const char x = "a";
  char* p = nullptr;
  const char** = /*(const char**)*/ &p; // q now points to p; this is (fortunately!) an error
  *q = &x;              // p now points to x
  *p = 'h';             // Ouch: modifies a const char!!
  std::cout << x;
}

