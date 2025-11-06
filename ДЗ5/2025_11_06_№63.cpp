#include <cstdio>
#include <stdlib.h>

int main(int argc, char **argv){
    int n = 0;
    scanf("%d ", &n);
    int a = 0; 
    for (int i = 0; i < n; i++){
        scanf("%d", &a);
        if (i % 2 == 0){
            printf("%d ", a);
        }
    }
    return 0;
}