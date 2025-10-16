#include <cstdio>
#include <stdlib.h>

int main(int argc, char **argv) {
    int n = 1;
    scanf( "%d", &n);
    int otvet = 0;
    int c = 0;
    int now = 0;
    while (n > 0) {
        scanf("%d", &c);
        if (c <= 0){
            now = 0;
        }
        else {
            now++;
        }
        if (now > otvet){
            otvet = now;
        }
        n = n - 1;
        //printf("%d %d\n", a, b); //Здесь был отладочный вывод
    }
    printf("%d\n", otvet);
    
    return 0;
}