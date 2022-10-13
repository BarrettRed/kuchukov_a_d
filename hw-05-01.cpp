#define _USE_MATH_DEFINES

#include <iostream>

#include <cmath>

#include <iomanip>


int fact(int n) {
  if ((n == 1) || (n == 0)) {
    return 1;
  } else {
    return n * fact(n - 1);
  }
}

int main() {
  double a = -1;
  double b = 1;
  double d = 0.1;
  double eps = 0.001;
  double t = 1;
  double s = 0;
  double x;
  //std::cin >> a >> b >> d >> eps;
  std::cout << std::setprecision(9) << std::setw(9) << std::fixed;
  for (double x = a; x <= b; x += d) {
    s = 0;
    t = 1;
    for (int i = 0; std::abs(t) >= eps; i++) {
      t = pow(-1, i) * pow(x, 2 * i) / fact(2 * i);
      s += t;
    }
    std::cout << x << " | " << s << " | " << cos(x) << std::endl;
  }
  return 0;
}