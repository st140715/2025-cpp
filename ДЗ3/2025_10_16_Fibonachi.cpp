#include <cstdio>

int main(int argc, char **argv) {
    int n = 0;
    scanf( "%d", &n);
    int a = 1;
    //scanf( "%d", &a);
    int b = 0;
    //scanf(" %d", &b);
    for (n > 0 ; n = n - 1;){
        //printf("%d\n", n);
        a = a + b;
        b = a - b;
    }
    printf("%d\n", a);
    
    return 0;
}