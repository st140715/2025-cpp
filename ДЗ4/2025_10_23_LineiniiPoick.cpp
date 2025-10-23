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
    int ot = 0;
    for (int i = 0; i < n; i++){
        if(a[i] == x){
            ot = ot + 1;
        }
    }
    printf("%d", ot);
        
    return 0;
}