#include <iostream>
#include <string>
#include <vector>

std::string DecodeM(std::string s) {
    int j = s.size();
    int k = 0;
    std::vector <char> ns(j);
    if (j % 2 == 1) {
        k = j / 2;
        ns[k] = s[0];
        int z = 1;
        for (int i = 1; i < k + 1; i++) {
            ns[k - i] = s[z];
            ns[k + i] = s[z + 1];
            z += 2;
        }
    }
    else {
        k = j / 2 - 1;
        ns[k] = s[0];
        ns[k + 1] = s[1];
        int z = 2;
        for (int i = 1; i < k + 1; i++) {
            ns[k - i] = s[z];
            ns[k + i + 1] = s[z + 1];
            z += 2;
        }
    }
    s = "";
    for (int i = 0; i < j; i++) {
        s += ns[i];
    }
    return s;
}

int main() {
    std::string s;
    std::cin >> s;
    int k = 0;
    std::string a = "";
    int j = s.size();
    for (int i = 0; i < j; i++) {
        if (s.size() % 2 == 0) {
            k = s.size() / 2 - 1;
        }
        else {
            k = s.size() / 2;
        }
        a += s[k];
        s.erase(k, 1);
    }
    std::cout << a;
    a = DecodeM(a);
    std::cout << std::endl << a;
}