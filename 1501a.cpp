#include <iostream>

#include <vector>

int div_up(int x, int y) {
  return (x - y) / 2 + ((x - y) % 2 ? 1 : 0);
}

int main() {
  int t;
  int n;
  int ct;
  std::vector < int > a;
  std::vector < int > b;
  std::vector < int > tm;

  std::cin >> t;
  for (int j = 0; j < t; j++) {
    a.clear();
    b.clear();
    tm.clear();
    std::cin >> n;
    int A, B, TM;
    for (int i = 0; i < n; i++) {
      std::cin >> A >> B;
      a.push_back(A);
      b.push_back(B);
    }
    for (int i = 0; i < n; i++) {
      std::cin >> TM;
      tm.push_back(TM);
    }
    ct = 0;
    for (int i = 0; i < n; i++) {
      if (i > 0) {
        ct += a[i] - b[i - 1] + tm[i];
      } else {
        ct += a[i] + tm[i];
      }
      if (i != n - 1) {
        if (ct == a[i]) {
          ct = b[i];
        } else {
          ct = ct + div_up(b[i], a[i]);
        }
      }
    }
    std::cout << ct << std::endl;
  }
}