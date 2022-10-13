#include <iostream>

#include <vector>

int main() {
    int t, n, m, sx, sy, d, a;
    std::cin >> t;
    for (int i(0); i < t; i++) {
        std::cin >> n >> m >> sx >> sy >> d;
        if (((sx - d > 1) && (sy + d < m)) || ((sx + d < n) && (sy - d > 1))) {
            std::cout << n - 1 + m - 1 << std::endl;
        } else {
            std::cout << -1 << std::endl;
        }
    }
    return 0;
}