#include <cstdio>
#include <stdlib.h>

int main(int argc, char **argv){
    int n = 0;
    scanf("%d ", &n);
    int w = 0;
    int* a = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < ((n / 2) + n % 2); i++){
        w = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = w;
    }
    for (int i = 0; i < n; i++){
         printf("%d ", a[i]);
    }
    return 0;
}