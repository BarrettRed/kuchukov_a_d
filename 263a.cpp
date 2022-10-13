#include <iostream>

#include <cmath>

int main() {
    int a, k(1);
    std::cin >> a;
    while (a != 1) {
        std::cin >> a;
        k++;
    }
    int i = (k - 1) / 5 + 1;
    int j = (k - 1) % 5 + 1;
    std::cout << abs(i - 3) + abs(j - 3);
    return 0;
}