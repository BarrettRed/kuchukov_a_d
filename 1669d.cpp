#include <iostream>

#include <string>

int main() {
  int t;
  int n;
  std::string s;
  std::cin >> t;
  for (int z = 0; z < t; z++) {
    std::cin >> n;
    std::cin >> s;
    if (s[n - 1] != 'W') {
      s = s + 'W';
    }
    if (s[0] != 'W') {
      s = 'W' + s;
    }
    bool flag = true;
    int kr = 0;
    int kb = 0;
    int xl = 0;
    int xr = 0;
    for (int i = 0; i < s.length(); i++) {
      if (s[i] == 'W') {
        xl = xr;
        xr = i;
      }
      if (xr - xl > 1) {
        for (int j = xl + 1; j < xr; j++) {
          if (s[j] == 'R') {
            kr++;
          }
          if (s[j] == 'B') {
            kb++;
          }
        }
        if ((kr == 0) || (kb == 0)) {
          flag = false;
          break;
        } else {
          kr = 0;
          kb = 0;
        }
      }
    }
    if (flag) {
      std::cout << "YES" << std::endl;
    } else {
      std::cout << "NO" << std::endl;
    }
  }
  return 0;
}