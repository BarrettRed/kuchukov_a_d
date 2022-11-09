#include <iostream>


int main() {
  int n;
  long long int k;
  std::cin >> n >> k;
  int a;
  std::cin >> a;
  int mx = a;
  int c = 0;
  for (int i = 0; i < n - 1; i++) {
    std::cin >> a;
    if (a > mx) {
      mx = a;
      c = 1;
    } else {
      c++;
    }
    if (c == k) {
      std::cout << mx;
      break;
    }
  }
  if (c != k) {
    std::cout << mx;
  }
}