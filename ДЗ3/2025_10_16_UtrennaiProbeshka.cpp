#include <cstdio>
#include <stdlib.h>

int main(int argc, char **argv) {
    float a = 1;
    scanf( "%f", &a);
    float b = 1;
    scanf(" %f", &b);
    int otvet = 1;
    while (a < b){
        a = a * (115.0/100.0);
        otvet++;
    }
    printf("%d\n", otvet);
    
    return 0;
}