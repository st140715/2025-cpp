#include <cstdio>
#include <stdlib.h>
#include <cmath>
#include <ctype.h>

int ToUpper(unsigned char c) ;

int main(int argc, char **argv){
    char c = '0';
    scanf("%c", &c);
    ToUpper(c);
    return 0;
}

int ToUpper(unsigned char c){
    if(isupper(c)){
        c = c + 32;
        printf("%c", c);
        return 0;
    }
    c = c - 32;
    printf("%c", c);
    return 0;
}