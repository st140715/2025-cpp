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
    int ma = 0;
    int mi = 1001;
    for (int i = 0; i < n; i++){
        if(a[i] > ma){
            ma = a[i];   
        }
        if(a[i] < mi){
            mi = a[i];   
        }
    }
    for (int i = 0; i < n; i++){
        if(a[i] == ma){
            printf("%d ", mi);
        }
        else{
            printf("%d", a[i]);
        }
        if(i + 1 < n){
            printf(" ");
        }
    }
    return 0;
}