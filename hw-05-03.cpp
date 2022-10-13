#define _USE_MATH_DEFINES

#include <iostream>

#include <cmath>

#include <iomanip>


int fact(int n) {
  if (n == 1) {
    return 1;
  } else {
    return n * fact(n - 1);
  }
}

int main() {
  double a = 0;
  double b = 1;
  double d = 0.1;
  double eps = 0.0001;
  double t = 1;
  double s = 0;
  //std::cin >> a >> b >> d >> eps;
  std::cout << std::setprecision(7) << std::setw(7) << std::fixed;
  for (double x = a; x <= b; x += d) {
    s = 0;
    t = 1;
    for (int i = 1; std::abs(t) >= eps; i++) {
      int f = fact(i);
      t = pow(2 * x, i) / f;
      s += t;
    }
    std::cout << x << " | " << s << " | " << pow(M_E, 2 * x) - 1 << std::endl;
  }
  return 0;
}