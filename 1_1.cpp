/*
cd -
pwd 
ls (list)
ls -l
  r - read 
  w - write 
  x - execute (выполнение)
  open the directory, 
cat   
rm b.out
chmod -x a.out - отобрать права
chmod +x a.out
echo Hello
echo $PATH

ctrl + w  - delete word
ctrl + u  - delete string


g++ second.cpp  --> a.out
g++ -o b.out second.cpp --> b.out
./a.out  

 */

#include <iostream>

// using namespase std;

int main() {
  int x;
  std::cin >> x;
  std::cout << x + 5;
  // по умолчанию стоит return 0; 
}

