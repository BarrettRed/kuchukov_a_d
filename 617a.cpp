#include <iostream>


int main() {
    int x;
    std::cin >> x;
    if (x > 5) {
        if (x % 5 == 0) {
            int k = x / 5;
            std::cout << k;
        } else {
            int k = x / 5;
            std::cout << 1 + k;
        }
    } else {
        std::cout << 1;
    }

}