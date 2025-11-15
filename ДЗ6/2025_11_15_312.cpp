#include <cstdio>
#include <stdlib.h>
#include <cmath>

int phi(int n);

int main(int argc, char **argv){
    int n = 0;
    scanf("%d", &n);
    printf("%d", phi(n));
    return 0;
}

int phi(int n){
    if(n == 0){
        return 1;
    }
    if(n == 1){
        return 1;
    }
    else{
        return phi(n - 1) + phi(n - 2);
    }
}