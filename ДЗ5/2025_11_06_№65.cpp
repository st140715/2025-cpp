#include <cstdio>
#include <stdlib.h>

int main(int argc, char **argv){
    int n = 0;
    scanf("%d ", &n);
    int a = 0;
    int otvet = 0;
    for (int i = 0; i < n; i++){
        scanf("%d", &a);
        if (a > 0){
            otvet = otvet + 1;
        }
    }
    printf("%d ", otvet);
    return 0;
}