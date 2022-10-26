#include <iostream>

int main() {
  int t;
  int n;
  std::string s;
  char c;
  int k;
  int mx;
  std::cin >> t;
  for (int z = 0; z < t; z++) {
    std::cin >> n >> c;
    std::cin >> s;
    mx = 0;
    for (int i = 0; i < n; i++) {
      k = 0;
      if (s[i] == c) {
        for (int j = i; s[j % n] != 'g'; j++) {
          k++;
        }
        if (k > mx) {
          mx = k;
        }
      }
    }
    std::cout << mx << std::endl;
  }
  return 0;
}