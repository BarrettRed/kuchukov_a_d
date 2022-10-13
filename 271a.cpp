#include <iostream>

using namespace std;

int main() {
    int y = 0;
    cin >> y;
    y = y + 1;
    for (y; y <= 9999; y++) {
        int a = y / 1000;
        int b = (y - 1000 * a) / 100;
        int c = (y - 1000 * a - 100 * b) / 10;
        int d = y % 10;
        bool l = a != b;
        l = l && a != c;
        l = l && a != d;
        l = l && b != c;
        l = l && b != d;
        l = l && c != d;
        if (l) {
            cout << y;
            break;
        }
    }

}