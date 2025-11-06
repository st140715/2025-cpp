#include <cstdio>
#include <stdlib.h>

int main(int argc, char **argv){
    int n = 0;
    scanf("%d ", &n);
    int b = 0;
    int a = 0;
    int otvet = 0;
    for (int i = 0; i < n; i++){
        b = a;
        scanf("%d", &a);
        if (i > 0 && a > b){
            otvet = otvet + 1;
        }
    }
    printf("%d ", otvet);
    return 0;
}