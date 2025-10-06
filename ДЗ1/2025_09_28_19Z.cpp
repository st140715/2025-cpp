#include<cstdio>

int main(int argc,char** argv)
{
    int sh = 0;
    scanf("%d", &sh);
    int ia = 0;
    scanf("%d", &ia);
    printf("%d", ia/sh);
    printf(" ");
    int k = ia - sh*(ia/sh);
    int sign = (k > 0) or (k < 0);
    printf("%d", k );
    printf(" ");
    printf("%d", (sh - k)*sign );
    return 0;
}