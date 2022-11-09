#include <iostream>

#include <set>

int main() {
  int n;
  std::cin >> n;
  int k = 0;
  std::multiset < int > r;
  int a;
  for (int i = 1; i <= n; i++) {
    std::cin >> a;
    r.insert(a);
  }
  for (auto & s: r) {
    if (k == 0) {
      a = s;
      k++;
      continue;
    }
    if (s >= k + 1) {
      k++;
    }
    a = s;
  }
  std::cout << k;
}