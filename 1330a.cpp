#include <iostream>

#include <vector>

int main() {
    int t, n, x, a;
    std::cin >> t;
    for (int i(0); i < t; i++) {
        std::cin >> n >> x;
        std::vector < int > r(300);
        for (int j(0); j < n; j++) {
            std::cin >> a;
            r[a]++;
        }
        int k(0);
        for (int j(1);
            (x > 0) || (r[j] != 0); j++) {
            if ((r[j] == 0) && (x > 0)) {
                r[j]++;
                x--;
            }
            k++;
        }
        std::cout << k << std::endl;
    }
    return 0;
}