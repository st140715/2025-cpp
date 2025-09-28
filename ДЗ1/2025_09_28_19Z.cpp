#include<cstdio>

int main(int argc,char** argv)
{
    int sh = 0;
    scanf("%d", &sh);
    int ia = 0;
    scanf("%d", &ia);
    printf("%d", ia/sh);
    printf(" ");
    printf("%d", ia - sh*(ia/sh) );
    printf(" ");
    if(ia - sh*(ia/sh)==0){
        printf("0");
    }
    else{
        printf("%d", sh - ( ia - sh*(ia/sh) ) );
    }
    return 0;
}