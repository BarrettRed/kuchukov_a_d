#include <iostream>

#include <vector>

int main() {
  int t;
  int n;
  int k;
  std::vector < int > a;
  std::cin >> t;
  for (int i = 0; i < t; i++) {
    a.clear();
    k = 1;
    std::cin >> n;
    int x;
    for (int j = 0; j < n; j++) {
      std::cin >> x;
      a.push_back(x);
    }
    if (a[0]==1) {
      k++;
    }
    for (int i = 1; i < n; i++) {
        if (a[i] == 1) {
          if (a[i - 1] == 1) {
            k += 5;
          } else {
            k++;
          }
        } else {
          if (a[i - 1] == 0) {
            k = -1;
            break;
          }
        }
    }
    std::cout << k << std::endl;
  }
}
