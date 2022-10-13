#include <iostream>

int main() {
    long long int n = 0;
    long long int b = 0;
    std::cin >> n;
    if (n % 2 == 0) {
        b = n / 2;
        std::cout << b;
    } else {
        b = (n + 1) / (-2);
        std::cout << b;
    }
}