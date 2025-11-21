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

int ToUpper(unsigned char c) {
    printf("%c", toupper(c));
    return 0;
}