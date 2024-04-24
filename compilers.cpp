/*
 
4 стадии сборки
  1. препоцессинг
  2. компиляция
  3. ассемблирование
  4. линковка

1. дерективы препроцессора
  #include <iostream>
  <> - means standart path
  "" - from your directory
  #if
  #pragma

  1.cpp -> 1.cpp (but without #... )

2. компиляция

  1.cpp -> 1.s

3. assembler

  1.s -> 1.o  // object file
              // with binary code

4. linker
  
  1.o -> a.out
  в iostream лежат только объявления
  линковщик подставляет в функции код
  чтобы не перекомпилировать все библиотеки

*/

/*

g++ -v 1_1.cpp                      -v:  выводит логи

g++ -E 1_1.cpp > output.cpp         -E:  делает только препроцессинг
                                     >:  выводит в файл, а не консоль 

g++ -S 1_1.cpp     ->  1_1.s        -S:  ассемблерный код
g++ -c 1_1.cpp     ->  1_1.o        -c:  предпоследняя стадия
                                    hd - программа позволяет считывать по байтам
                                    hd 1_1.o

g++ 1_1.o          ->  1_1.out


сайт godbolt.org  
cpp code -> assembler code

*/


// -O2  - оптимизация второго уровня



/*

санитайзеры
позволяет уловить UB

оно отлавливает в runtime, not CE

g++ -g -fsanitize=address 1_1.cpp     замедляется раз в 5-10  очень тяжеловесно
-g: добавляет дебажную информацию (упал на 10 строке)
// не к той области памяти обращение

-fsanitize=leak     memory leak
-fsanitize=undefined

*/


