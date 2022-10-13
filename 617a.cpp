#include <iostream>

using namespace std;

int main() {
    int x;
    cin >> x;
    if (x > 5) {
        if (x % 5 == 0) {
            int k = x / 5;
            cout << k;
        } else {
            int k = x / 5;
            cout << 1 + k;
        }
    } else {
        cout << 1;
    }

}