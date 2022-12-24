#include<iostream>
#include<iomanip>
#include <cmath>

int main() {
    double x;
    double a = 0.1;
    double b = 1.01;
    double dx = 0.05;
    double eps = 0.0001;
    double s = 0;
    double t = 0;
    std::cout<<std::setprecision(7)<<std::fixed<<std::endl;
    for (x = a; x <= b; x += dx) {
        s = 0;
        t = 1;
        for (int i = 0; std::abs(t)>eps; i++) {
            int z = 2*i + 1;
            t = pow(-1, i)*pow(x, z)/(2*i+1);
            s += t;
        }
        std::cout<<x<<" | "<<s<<std::endl;
    }

}
