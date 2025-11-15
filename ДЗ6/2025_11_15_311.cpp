#include <cstdio>
#include <stdlib.h>
#include <cmath>

int f (double a, int n);

int main(int argc, char **argv){
    double a = 0;
    scanf("%lf", &a);
    int n = 1;
    scanf("%d", &n);
    f(a, n);
    return 0;
}

int f (double a, int n){
    if(n == 0){
        printf("1");
        return 0;
    }
    n = n - 1;
    int w = a;
    int i = 1;
    while(i <= n){
        if(i + i < n){
            i = i + i;
            a = a * a;
        }
        else{
            i = i + 1;
            a = a * w;
        }
    }
    printf("%lf", a);
    return 0;
}