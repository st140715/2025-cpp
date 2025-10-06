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

    long long mnogo = 1410065408/2;            //весь этот финт ушами
    int nedo_sign = (mnogo + k - 1)/mnogo;     //выдаёт 0 если k = 0
    int sign = (mnogo + nedo_sign - 1)/mnogo;  //и 1 если 0 < k < 10^9
    
    printf("%d", k );
    printf(" ");
    printf("%d", (sh - k)*sign );
    return 0;
}