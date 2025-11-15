#include <cstdio>
#include <stdlib.h>

int min (int a, int b, int c, int d);

int main(int argc, char **argv){
    int a = 0;
    scanf("%d", &a);
    int b = 0;
    scanf("%d", &b);
    int c = 0;
    scanf("%d", &c);
    int d = 0;
    scanf("%d", &d);
    
    printf("%d", min(a, b,c, d));

    return 0;
}

int min (int a, int b, int c, int d){
    int s = (a + b) - (a + b + abs(a - b)) / 2;
    int w = (c + d) - (c + d + abs(c - d)) / 2;
    return  (s + w) - (s + w + abs(s - w)) / 2;
}