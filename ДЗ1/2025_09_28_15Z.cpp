#include<cstdio>

int main(int argc,char** argv)
{
    int k = 0;
    scanf("%d", &k);
    k = k / 10;
    k = k - 10 * (k / 10);
    printf("%d\n", k);
    return 0;
}