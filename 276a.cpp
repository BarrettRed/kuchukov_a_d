#include <iostream>

#include <vector>

#include <cmath>

int main() {
    long int n, k, max(-10000000000);
    std::cin >> n >> k;
    for (int i(0); i < n; i++) {
        int f, t, s;
        std::cin >> f >> t;
        if (t >= k) {
            s = f - (t - k);
        } else {
            s = f;
        }
        if (s > max) {
            max = s;
        }

    }
    std::cout << max;
}