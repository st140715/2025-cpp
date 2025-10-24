#include <cstdio>
#include <stdlib.h>
#define t 1000

int main(int argc, char **argv){
    int n = 0;
    scanf("%d", &n);
    int a[t] = {0};
    for (int i = 0; i < n; i++){
        scanf( "%d", &a[i]);
    }
    int x = 0;
    scanf("%d", &x);
    int ver = 1001;
    int nij = -1001;
    for (int i = 0; i < n; i++){
        if(a[i] > nij && a[i] <= x){
            nij = a[i];   
        }
        if(a[i] < ver && a[i] >= x){
            ver = a[i];   
        }
    }
    if(ver - x < x - nij){
        printf("%d ", ver);
    }
    else{
        printf("%d", nij);
    }
    return 0;
}