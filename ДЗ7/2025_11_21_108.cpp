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
    for(int i = 0; i < (strlen(s) / 2); i++){
        if(s[i] != s[strlen(s) - 2 - i]){
            printf("no");
            return 0;
        }
    }
    printf("yes");
    return 0;
}