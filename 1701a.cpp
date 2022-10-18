#include <iostream>

int main() {
  int t;
  std::cin >> t;
  for (int i = 0; i < t; i++) {
    int k = 0;
    int a;
    for (int j = 1; j <= 4; j++) {
      std::cin >> a;
      if (a == 1) {
        k++;
      }
    }
    switch (k) {
    case 0:
      std::cout << 0 << std::endl;
      break;
    case 4:
      std::cout << 2 << std::endl;
      break;
    default:
      std::cout << 1 << std::endl;
      break;
    }
  }
}