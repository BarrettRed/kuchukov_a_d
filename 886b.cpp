#include <iostream>

#include <vector>

#include <set>

int main() {
  int n;
  std::cin >> n;
  std::vector < int > s;
  std::set < int > b;
  int a;
  for (int i = 0; i < n; i++) {
    std::cin >> a;
    s.push_back(a);
  }
  int l;
  for (int i = n - 1; i > -1; i--) {
    if (b.count(s[i]) == 0) {
      b.insert(s[i]);
      l = s[i];
    }
  }
  std::cout << l;
}
