#include<cstdio>

int main(int argc,char** argv)
{
    long long n = 0;
    scanf("%d", &n);
    long long mnogo = 1410065408/2;
    printf("%d\n", mnogo);
    int nedo_sign = (mnogo + n - 1)/mnogo;
    int sign = (mnogo + nedo_sign - 1)/mnogo;
    printf("%d\n", sign);
    return 0;
}