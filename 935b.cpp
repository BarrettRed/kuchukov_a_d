#include <iostream>

#include <string>

int main() {
  int n;
  std::string s;
  std::cin >> n;
  std::cin >> s;
  int x = 0, x0 = x;
  int y = 0, y0 = y;
  int k = 0;
  std::string p, p0;
  for (int i = 0; i < n; i++) {
    if (y0 > x0) {
      p0 = 'u';
    }
    if (y0 < x0) {
      p0 = 'd';
    }
    if (s[i] == 'U') {
      y0 = y;
      y++;
    } else if (s[i] == 'R') {
      x0 = x;
      x++;
    }
    if (y > x) {
      p = 'u';
    }
    if (y < x) {
      p = 'd';
    }
    if (p != p0) {
      k++;
      p0 = p;
    }
  }
  std::cout << k - 1;
}