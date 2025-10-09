#include<cstdio>

int main(int argc,char** argv)
{
    int k = 0;
    scanf("%d", &k);
    int c = k / 100;
    int a = k - 10 * (k / 10);
    k = k / 10;
    int b = k - 10 * (k / 10);
    printf("%d\n", a + b + c);

    return 0;
}