#include <cstdio>
#include <cmath>

int main(int argc, char **argv) {
    int a = 0;
    scanf( "%d", &a);
    int b = 0;
    scanf(" %d", &b);
    int c = 0;
    scanf(" %d", &c);
    //printf("%d\n", a);
    if (a == 0 && b == 0 && c == 0){
        printf("-1");
        return 0;
    }
    if (a == 0){
        printf("1\n");
        printf("%f\n", (-c * 1.0) / (b * 1.0));
        return 0;
    }
    if (b * b * 1.0 - 4.0 * a * c < 0.0){
        printf("0");
        return 0;
    }
    if (b * b * 1.0 - 4.0 * a * c == 0.0){
        printf("1\n");
        printf("%f\n", (-b * 1.0) / (2.0 * a));
        return 0;
    }
    // если программа до сих пор работает, то D > 0
    printf("2\n");
    printf("%f\n", (-(b * 1.0) + sqrt(b * b * 1.0 - 4.0 * a * c)) / (2.0 * a));
    printf("%f\n", (-(b * 1.0) - sqrt(b * b * 1.0 - 4.0 * a * c)) / (2.0 * a));
    
    return 0;
}