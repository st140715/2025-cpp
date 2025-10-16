#include <cstdio>
#include <stdlib.h>

int main(int argc, char **argv) {
    int otvet = 0;
    int c = 0;
    int c2 = 0;
    int now = 0;
    while (1) {
        scanf("%d", &c);
        if (c <= 0){
            break;
        }
        if (c == c2){
            now++;
        }
        else{
            now = 0;
        }
        if (now > otvet){
            otvet = now;
        }
        c2 = c;
    }
    printf("%d\n", otvet + 1);
    
    return 0;
}