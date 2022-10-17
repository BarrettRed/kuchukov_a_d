#include <iostream>

int main() {
  int n;
  int k;
  std::cin >> n >> k;
  int a;
  int min = 101;
  for (int i = 0; i < n; i++) {
    std::cin >> a;
    if ((k % a == 0) && (min > k / a)) {
      min = k / a;
    }
  }
  std::cout << min;
}