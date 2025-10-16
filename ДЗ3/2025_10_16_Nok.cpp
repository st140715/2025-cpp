#include <cstdio>
#include <stdlib.h>

int main(int argc, char **argv) {
    int a = 1;
    scanf( "%d", &a);
    int c = a;
    int b = 1;
    scanf(" %d", &b);
    int d = b;
    int nod = 0;
    int max = 0;
    int min = 0;
    while (a != 0 && b != 0){
        max = (a + b + abs(a - b)) / 2;
        min = (a + b - abs(a - b)) / 2;
        a = max - min;
        b = min;
        nod = (a + b + abs(a - b)) / 2;
    }
    nod = (a + b + abs(a - b)) / 2;
    printf("%d\n", (c * d) / nod);
    
    return 0;
}