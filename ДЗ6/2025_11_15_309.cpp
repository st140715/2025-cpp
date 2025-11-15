#include <cstdio>
#include <stdlib.h>
#include <cmath>

int Election(int x, int y, int z);

int main(int argc, char **argv){
    int x = 0;
    scanf("%d", &x);
    int y = 0;
    scanf("%d", &y);
    int z = 0;
    scanf("%d", &z);
    printf("%d", Election(x, y, z));
    return 0;
}

int Election(int x, int y, int z){
    if((x && y) || (y && z) || (z && x)){
        return 1;
    }
    return 0;
}