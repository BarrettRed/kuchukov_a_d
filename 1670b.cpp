#include <iostream>

#include <string>

#include <vector>

int main() {
  int t;
  int n;
  std::string s;
  int k;
  std::string l;
  std::cin >> t;
  for (int i = 0; i < t; i++) {
    std::cin >> n;
    std::cin >> s;
    std::cin >> k;
    char c;
    l.erase();
    for (int j = 0; j < k; j++) {
      std::cin >> c;
      l += c;
    }
    int b = 0;
    for (int g = 0; g < n; g++) {
      if (l.find(s[g]) != -1) {
        b++;
      }
    }
    int h = 0;
    while ((b > 1) || ((l.find(s[0]) == -1) && (b == 1))) {
      h++;
      for (int g = 0; g < s.length() - 1; g++) {
        if (l.find(s[g + 1]) != -1) {
          if (l.find(s[g]) != -1) {
            b--;
          }
          s.erase(g, 1);
          g--;
        }
      }
    }
    std::cout << h << std::endl;
  }
}