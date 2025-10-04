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
    printf("%d", (sh - ( ia - sh*(ia/sh) ) )*(ia - sh*(ia/sh)!=0) );
    return 0;
}