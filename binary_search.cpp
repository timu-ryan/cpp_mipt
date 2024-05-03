#include <iostream>
#include <vector>

int binary_search(const std::vector<int>& v, int num) {
  int low = 0,
      high = v.size() - 1,
      mid,
      guess;
  while (low <= high) {
    mid = (low + high) / 2;
    guess = v[mid];
    if (guess == num) { return mid; }
    if (guess < num) { low = mid + 1; }
    else { high = mid - 1; }
  }

  return -1;
}

int main() {
  std::vector<int> v = {1, 4, 9, 14, 15};

  std::cout << binary_search(v, 4) << '\n';    // 1
  std::cout << binary_search(v, 14) << '\n';   // 3                                
  std::cout << binary_search(v, 23) << '\n';   // -1

}

// int binary_search(int (&x)[5], int N, int num);
