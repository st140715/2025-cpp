#include <cstdio>
#include <stdlib.h>
#include <string.h>

int Compare(char* s);

int main(int argc, char **argv){
    char s[100];
    fgets(s, sizeof(s), stdin);
    Compare(s);
    return 0;
}

int Compare(char* s){
    int n = 1;
    for(int i = 0; i < strlen(s); i++){
        if(s[i] == ' '){
            n = n + 1;
        }
    }
    printf("%d", n);
    return 0;
}