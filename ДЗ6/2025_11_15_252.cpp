#include <cstdio>
#include <stdlib.h>
#include <cmath>

double f (double a, double b);

int main(int argc, char **argv){
    double a = 0;
    scanf("%lf", &a);
    double b = 0;
    scanf("%lf", &b);
    f(a, b);
    return 0;
}

double f (double a, double b){
    printf("%lf", pow(a, b));
    return 0;
}