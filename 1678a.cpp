#include <iostream>

#include <vector>

#include <algorithm>

int main() {
  int t;
  std::cin >> t;
  int n;
  bool flag;
  std::vector < int > a;
  for (int i = 0; i < t; i++) {
    std::cin >> n;
    flag = false;
    a.clear();
    int A;
    for (int j = 0; j < n; j++) {
      std::cin >> A;
      a.push_back(A);
    }
    sort(a.begin(), a.end());
    int k = count(a.begin(), a.end(), 0);
    if ((a[0] == 0) && (k > 0)) {
      std::cout << n - k << std::endl;
      continue;
    } else {
      for (int j = 0; j < n - 1; j++) {
        if (a[j] == a[j + 1]) {
          flag = true;
          break;
        }
      }
      if (flag) {
        std::cout << n << std::endl;
      } else {
        std::cout << n + 1 << std::endl;
      }
    }
  }

}