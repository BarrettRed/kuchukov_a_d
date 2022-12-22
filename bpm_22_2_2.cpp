#include<iostream>
#include <cmath>


int main()
{
    int x;
    int y;
    int k = 0;
    int i;
    double s;
    for (i = 1; std::cin>>x; i++) {
        std::cin>>y;
        if (y<=2-x*x) {
            if ((y>=x)&&(y>=-x)) {
                k++;
            }
        }
    }
    std::cout<<float(k)/(i-1);
}
