#include <iostream>
#include <vector>

// 1.2. Types and their supported operations

void print_vector(std::vector<std::string> v);
void string_methods(std::string s);
void vector_methods(std::vector<int> v);

int main() {
  //std::vector<int> v;

  //for (int i = 0; i < 5; i++) {
  //  v.push_back(i);
  //}

  //for (int i = 0; i < v.size(); i++) {
  //  std::cout << v[i] << '\n';
  //}
  //std::cout << v.size() << '\n';

  //std::string s = "abcdefg";
  
  //std::cout << s << '\n';
  
  std::vector<std::string> v;
  v.reserve(10);
  for (int i = 0; i < 10; i++) {
    v.push_back("some string #");
  }
  print_vector(v);
}

void print_vector(std::vector<std::string> v) {
  for (int i = 0; i < v.size(); i++) {
    std::cout << v[i] << '\n';
  }
}


void string_methods(std::string s) {
  std::string s = "abc";
  s[0];
  s[1000]; // undefined behaviour
  // strings finish with '\0' - null-terminated strings
  s.at('x'); // ensures that it does not go beyond the boundary of the vector
  s + s;
  s += s;
  s.push_back('c');
  s.pop_back();
  s.front() = 'y';
  s.back();

}

void vector_methods(std::vector<int> v) {  
  v[0];
  v.at(size_t);
  v.push_back(3);
  v.pop_back();
  v.front();
  v.back();
  v.size();

  v.clear();
  v.reserve(10);
  v.resize(10, 'a');
  v.shrink_to_fit(); // since c++11
  
  v.capacity();
}

