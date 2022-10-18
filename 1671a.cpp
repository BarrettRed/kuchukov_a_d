#include <iostream>

#include <string>

int main() {
  int t;
  std::cin >> t;
  std::string s;
  for (int i = 0; i < t; i++) {
    std::cin >> s;
    int l = s.size();

    if (((l != 1) && (s.find("aba") == -1)) && (s.find("bab") == -1) && (s[0] + s[1] != 195) && (s[l - 2] + s[l - 1] != 195)) {
      std::cout << "YES" << std::endl;

    } else {
      std::cout << "NO" << std::endl;
    }
  }

}