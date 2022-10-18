#include <iostream>


int main() {
  int t;
  std::cin >> t;
  int n;
  int m;
  char d;
  for (int z = 0; z < t; z++) {
    std::cin >> n >> m;
    int min_left = 10;
    int min_up = 10;
    int x, y;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        std::cin >> d;
        if (d == 'R') {
          if (min_left > j) {
            min_left = j;
            x = i;
          }
          if (min_up > i) {
            min_up = i;
            y = j;
          }
        }
      }
    }
    if ((min_left == y) && (min_up == x)) {
      std::cout << "YES" << std::endl;
    } else {
      std::cout << "NO" << std::endl;
    }
  }
}