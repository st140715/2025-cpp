#include <cstdio>
#include <stdlib.h>
#include <string.h>

int Compare(char* S1, char* S2);

int main(int argc, char **argv){
    char S1[100];
    char S2[100];
    fgets(S1, sizeof(S1), stdin);
    fgets(S2, sizeof(S2), stdin);
    Compare(S1, S2);

    return 0;
}

int Compare(char* S1, char* S2){
    if(strcmp(S1, S2) == 0){
        printf("yes");
        return 0;
    }
    printf("no");
    return 0;
}