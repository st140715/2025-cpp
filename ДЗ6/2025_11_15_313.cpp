#include <cstdio>
#include <stdlib.h>
#include <cmath>

int phi(int n, int k);

int main(int argc, char **argv){
    int n = 0;
    scanf("%d", &n);
    int k = 0;
    scanf("%d", &k);
    printf("%d", phi(n, k));
    return 0;
}

int phi(int n, int k){
    if(k == 0){
        return 1;
    }
    if(k == n){
        return 1;
    }
    else{
        return phi(n - 1, k - 1) + phi(n - 1, k);
    }
}