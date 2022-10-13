#include <iostream>

int main() {
    int n, l(0);
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int a;
        std::cin >> a;
        if (a == 1) {
            std::cout << "HARD";
            break;
        }
        l++;
    }
    if (l == n) {
        std::cout << "EASY";
    }
}