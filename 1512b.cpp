#include <iostream>
 
#include <string>
 
int main() {
  int t;
  int n;
  std::cin >> t;
  for (int x = 0; x < t; x++) {
    std::cin >> n;
    int i1 = -1, j1 = -1;
    int i2 = -1, j2 = -1;
    int i3 = -1, j3 = -1;
    int i4 = -1, j4 = -1;
    std::string s;
    for (int i = 0; i < n; i++) {
      std::cin >> s;
      for (int j = 0; j < n; j++) {
        if (s[j] == '*') {
          i2 = i1;
          i1 = i;
          j2 = j1;
          j1 = j;
        }
      }
    }
 
    if (i1 == i2) {
      i3 = std::abs(i1 - 1);
      i4 = i3;
      j3 = j1;
      j4 = j2;
    } else if (j1 == j2) {
      j3 = std::abs(j1 - 1);
      j4 = j3;
      i3 = i1;
      i4 = i2;
    } else {
      i3 = i1;
      j3 = j2;
      i4 = i2;
      j4 = j1;
    }
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if ((i == i1) && (j == j1)) {
          std::cout << '*';
        } else if ((i == i2) && (j == j2)) {
          std::cout << '*';
        } else if ((i == i3) && (j == j3)) {
          std::cout << '*';
        } else if ((i == i4) && (j == j4)) {
          std::cout << '*';
        } else {
          std::cout << '.';
        }
        if (j == n - 1) {
          std::cout << std::endl;
        }
      }
    }
  }
}
