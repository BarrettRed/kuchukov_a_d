#include <iostream>

#include <vector>

int main() {
    std::vector < int > v;
    std::vector < int > a;
    int n = 0;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int x = 0;
        std::cin >> x;
        v.push_back(x);
    }
    int t = 0;
    for (int i = v.size() - 1; i >= 0; i--) {
        t = 0;
        for (int j = 0; j < a.size(); j++) {
            if (v[i] == a[j]) {
                t += 1;
            }
        }
        if (t == 0) {
            a.push_back(v[i]);
        }
    }
    std::cout << a.size() << std::endl;
    for (int i = a.size() - 1; i >= 0; i--) {
        std::cout << a[i] << " ";
    }
}