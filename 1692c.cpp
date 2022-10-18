#include <iostream>

#include <string>

int main() {
  int t;
  std::cin >> t;
  std::string s;

  for (int i = 0; i < t; i++) {
    bool flag = true;
    int x2 = -100, y2 = -100, x = -100, y = -100;
    for (int j = 0; j < 8; j++) {
      std::cin >> s;
      int k = std::count(s.begin(), s.end(), '#');
      if (k == 2) {
        x2 = j;
        y2 = s.find('#') + 2;
      } else {
        x = j;
        y = s.find('#');
      }
      if ((std::abs(x2 - x) == 1) && (y2 - y == 1) && flag) {
        flag = false;
        std::cout << x + 1 << ' ' << y + 1 << std::endl;
      }
    }

  }
}