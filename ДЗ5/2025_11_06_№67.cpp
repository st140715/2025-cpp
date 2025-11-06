#include <cstdio>
#include <stdlib.h>

int main(int argc, char **argv){
    int n = 0;
    scanf("%d ", &n);
    int b = 0;
    int a = 0;
    for (int i = 0; i < n; i++){
        b = a;
        scanf("%d", &a);
        if ((a > 0 && b > 0) || (a < 0 && b < 0)){
            printf("YES");
            return 0;
        }
    }
    printf("NO");
    return 0;
}