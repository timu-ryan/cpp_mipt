#include <iostream>
 
using std::string;
// pointers is not recommended, it's C style
string substr(const string& str, size_t from, size_t to) {

}

void f(const string&);  // we can't take rvalue ("some str") by ref
// обычные ссылки инициализировать через rvalue нельзя, а константные можно

void ff(const string& s); // 1 - most popular
void ff(string s);
void ff(string& s); 

const int& g(int x);
// если просто принимать значение без ссылки, то не надо его делать никогда константным

int main() {
  
  f("abcde");

  const int& x = 5; // it's OK

  int* p = new const int[10]{}; 

  {
    // lifetime expansion
    const string& s = "abcaaaaaaaaaaa";
    
    // ...
    f(s);

  }

  string s ="abc";
  const string& rs = s;
  ff(s); // перегрузка по const ref and ref is available
         // exact type matching
  // rs == s, but read only

  g(5);
}


const int& g(int x) {
  return x++; // CE - битая ссылка
              // lifetime expansion only if you declare local variable
}

