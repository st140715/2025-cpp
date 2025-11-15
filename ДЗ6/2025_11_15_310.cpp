#include <cstdio>
#include <stdlib.h>
#include <cmath>

int f (int a);

int main(int argc, char **argv){
    int a = 0;
    scanf("%d", &a);
    f(a);
    return 0;
}

int f (int a){
    int i = 2;
    while(i * i < a){
        if(a % i == 0){
            printf("composite");
            return 0;
        }
        i = i + 1;
    }
    printf("prime");
    return 0;
}