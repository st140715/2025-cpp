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
    int l = 0;
    scanf("%d", &l);
    int r = 0;
    scanf("%d", &r);
    int ot1 = a[l-1];
    int ot2 = l;
    for (int i = l - 1; i < r; i++){
        if(a[i] > ot1){
            ot1 = a[i];
            ot2 = i + 1;
        }
    }
    printf("%d %d", ot1, ot2);
        
    return 0;
}