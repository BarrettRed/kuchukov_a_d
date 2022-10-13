#include <iostream>

#include <vector>

int main() {
  int n;
  std::cin >> n;
  std::vector < int > a;
  int k = 0;
  int t = 0;
  std::cin >> t;
  for (int j = 0; j < t; j++) {
    a.clear();
    k = 0;
    for (int i = 0; i < n; i++) {
      int x;
      std::cin >> x;
      a.push_back(x);
    }
    int i = 0;
    while (a[n - 1] != 0) {
      if ((a[i] == a[i + 1]) && (a[i] != 0)) {
        a[i] = 0;
        i--;
      } else if (a[i] != 0) {
        a[i] = std::min(a[i], a[i + 1]);
        a[i + 1] = a[i];
        i--;
      }
      i++;
      k++;
    }
    std::cout << k << std::endl;
  }
}