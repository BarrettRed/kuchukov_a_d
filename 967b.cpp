#include <iostream>

#include <vector>

#include <algorithm>

int main() {
  int n;
  std::cin >> n;
  int A;
  std::cin >> A;
  int B;
  std::cin >> B;
  std::vector < int > s;
  int S = 0;
  int a;
  for (int i = 0; i < n; i++) {
    std::cin >> a;
    S += a;
    s.push_back(a);
  }
  std::sort(s.begin() + 1, s.end(), std::greater < int > ());
  int k = 0;
  if (float((s[0] * A) / S) < float(B)) {
    for (int i = 1; i < n; i++) {
      k++;
      S -= s[i];
      if (float((s[0] * A) / S) >= float(B)) {
        std::cout << k;
        break;
      }
    }
  } else {
    std::cout << 0;
  }
}
