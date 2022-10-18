#include <iostream>

#include <vector>

int main() {
  int n;
  int a;
  std::vector < int > p(n + 1);
  std::cin >> n;
  for (int i = 0; i < n; i++) {
    std::cin >> a;
    p[a] = i + 1;
  }
  for (int i = 1; i <= n; i++) {
    std::cout << p[i] << ' ';
  }
}