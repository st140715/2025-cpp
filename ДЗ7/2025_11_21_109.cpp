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
    for(int i = 0; i < strlen(s); i++){
        for(int j = i + 1; j < strlen(s); j++){
            if(s[i] == s[j]){
                printf("%c", s[i]);
                return 0;
            }        
        }   
    }
    return 0;
}