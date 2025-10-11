#include <cstdio>

int main(int argc, char **argv) {
    int a = 0;
    scanf( "%d", &a);
    int b = 0;
    scanf(" %d", &b);
    int c = 0;
    scanf(" %d", &c);
    //printf("%d\n", a);

    int plus = 0;
    if(a != 0){
        printf("%d", a);
        plus = 1;
    }
    if(b != 0){
        if (plus == 1 && b > 0){
            printf("+");
        }
        if (b != 1 && b != -1){
            printf("%d", b);
        }
        if (b == -1){
            printf("-");
        }
        printf("x");
        plus = 1;
    }
    if(c != 0){
        if (plus == 1 && c > 0){
            printf("+");
        }
        if (c != 1 && c != -1){
            printf("%d", c);
        }
        if (c == -1){
            printf("-");
        }
        printf("y");
        plus = 1;
    }
    if (a == c && c == b && b== 0){
        printf("0");
    }

    return 0;
}