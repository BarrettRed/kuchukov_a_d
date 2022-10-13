#include <iostream>

#include <vector>

#include <cmath>

int main() {
    int t, n;
    std::cin >> t;
    for (int i(0); i < t; i++) {
        std::cin >> n;
        std::vector < int > a;
        int k(0);
        int l(0);
        while (n > 0) {
            if (n % 10 != 0) {
                a.push_back(n % 10 * std::pow(10, k));
                l++;
            }
            n = n / 10;
            k++;
        }
        std::cout << l << std::endl;
        for (int i(0); i < a.size(); i++) {
            std::cout << a[i] << ' ';
        }
        std::cout << std::endl;
    }
}