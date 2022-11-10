#include <iostream>

#include <vector>

int main() {
  int n;
  std::cin >> n;
  int mx = 0;
  int t = 0;
  int s;
  int a;
  int k = 0;
  for (int i = 1; i <= n; i++) {
    s = 0;
    for (int j = 1; j <= 4; j++) {
      std::cin >> a;
      s += a;
    }
    if (i == 1) {
      t = s;
    }
    if (s > t) {
      k++;
    }
  }
  std::cout << k + 1;
}
