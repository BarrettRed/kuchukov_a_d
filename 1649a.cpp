#include <iostream>

int main() {
  int t;
  int n;
  int a, b, c, d;
  int x;
  int k;
  std::cin >> t;
  for (int j = 0; j < t; j++) {
    std::cin >> n;
    b = -1;
    c = -1;
    d = -1;
    x = 1;
    k = 0;
    for (int i = 0; i < n; i++) {
      std::cin >> a;
      if ((a == 1) && (b == 0)) {
        x++;
        k++;
      }
      if (a == 0) {
        x++;
        if (d == -1) {
          d = i - 1;
        }
        c = i + 1;
      }

      b = a;
    }
    if (k == 1) {
      std::cout << x - 1 << std::endl;
    } else {
      std::cout << c - d << std::endl;
    }
  }
}