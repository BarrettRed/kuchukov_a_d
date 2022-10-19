#include <bits/stdc++.h>

#include <iostream>

#include <vector>

#include <string>


int main() {
  int t;
  std::cin >> t;
  for (int z = 0; z < t; z++) {
    int n, k;
    std::cin >> n >> k;
    std::string s;
    std::cin >> s;
    int m = 0;
    for (int i = 0; i < n; i++) {
      if ((s[i] == s[i - 1]) && (s[i] == 'B')) {
        m++;
      } else if (m > mx) {
        mx = m;
        m = 0;
      }
    }
  }
  if (k > mx) {
    std::cout << k - mx << std::endl;
  } else {
    std::cout << 0 << std::endl;
  }
}
}
