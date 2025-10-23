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

    for (int i = 0; i < n; i++){
       printf("%d ", a[n - i - 1]);
    }
    return 0;
}