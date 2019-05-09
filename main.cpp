#include <iostream>

//Pi/4 = 1 - 1/3 + 1/5 - 1/7 + 1/9 - ... Write an algorithm to compute pi

int main(void)
{
    double pi = 0;
    double c = 1;
    int n = 1000000;

    for (int i = 1; i < n; i = i+2){
        pi += c/i;
        c = -c;
    }
    printf("%lf", pi*4);
}
