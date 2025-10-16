#include <cstdio>
#include <stdlib.h>

int main(int argc, char **argv) {
    int a = 1;
    //scanf( "%f", &a);
    int b = 1;
    //scanf(" %f", &b);
    int c = 1;
    while (1) {
        scanf( "%d", &c);
        if (c == 0){
            break;
        }
        if (c > a){
            b = a;
            a = c;
        }
        else if (c > b){
            b = c;
        }
        //printf("%d %d\n", a, b); //Здесь был отладочный вывод
        
    }
    printf("%d\n", b);
    
    return 0;
}