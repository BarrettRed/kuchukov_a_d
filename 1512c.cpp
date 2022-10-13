#include <bits/stdc++.h>

#include <iostream>

#include <string>


int main() {
  int t;
  std::cin >> t;
  int a, b;
  std::string s;
  for (int i = 0; i < t; i++) {
    std::cin >> a >> b;
    std::cin >> s;
    int A = a;
    int B = b;
    a -= std::count(s.begin(), s.end(), '0');
    b -= std::count(s.begin(), s.end(), '1');
    int e = s.length() - 1;
    for (int j = 0; j < s.length(); j++) {
      if ((s[j] == '1') && (s[e - j] == '?')) {
        if (b != 0) {
          s[e - j] = '1';
          b--;
          continue;
        } else {
          break;
        }
      }
      if ((s[j] == '0') && (s[e - j] == '?')) {
        if (a != 0) {
          s[e - j] = '0';
          a--;
          continue;
        } else {
          break;
        }
      }
      if (s[j] == '?') {
        if ((s[e - j] == '1') && (b != 0)) {
          s[j] = '1';
          b--;
          continue;
        }
        if ((s[e - j] == '0') && (a != 0)) {
          s[j] = '0';
          a--;
          continue;
        }
        if (s[e - j] == '?') {
          if (e - j != j) {
            if (b >= 2) {
              s[j] = '1';
              s[e - j] = '1';
              b -= 2;
              continue;
            } else {
              if (a >= 2) {
                s[j] = '0';
                s[e - j] = '0';
                a -= 2;
                continue;
              }
            }
          } else {
            if (b >= 1) {
              s[j] = '1';
              b--;
              continue;
            } else if (a >= 1) {
              s[j] = '0';
              a--;
              continue;
            }
          }
        }
      }
    }
    bool flag = true;
    for (int j = 0; j <= e; j++) {
      if (s[j] != s[e - j]) {
        flag = false;
      }
    }
    if ((s.find('?') == -1) && flag) {
      if ((A == std::count(s.begin(), s.end(), '0')) && (B == std::count(s.begin(), s.end(), '1'))) {
        std::cout << s << std::endl;
      } else {
        std::cout << -1 << std::endl;
      }
    } else {
      std::cout << -1 << std::endl;
    }
  }
}