#include <iostream>

#include <string>

std::string reverse(std::string S, int N) {
  for (int i = 0; i < N / 2; i++)
    std::swap(S[i], S[N - i - 1]);
  return S;
}

int main() {
  int t;
  std::string s;
  std::cin >> t;
  for (int z = 0; z < t; z++) {
    std::cin >> s;
    int n = s.length();
    if (n == 1) {
      std::cout << 1 << std::endl;
    } else {
      int p0 = s.find('0');
      s = reverse(s, n);
      int p1 = n - 1 - s.find('1');
      if (p0 == -1) {
        p0 = n - 1;
      }
      if (s.find('1') == -1) {
        p1 = 0;
      }
      std::cout << p0 - p1 + 1 << std::endl;
    }
  }
  return 0;
}