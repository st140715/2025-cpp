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
    int otwet = 0;
    int now = 0;
    for(int i = 0; i < strlen(s); i++){
        if(s[i] == ' ' || s[i] == '\0' || s[i] == '\n'){
            now = 0;
        }
        else{
            now = now + 1;
        }
        if(now > otwet){
            otwet = now;           
        }
    }
    printf("%d", otwet);
    return 0;
}