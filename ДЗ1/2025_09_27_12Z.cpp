#include<cstdio>

int main(int argc,char** argv)
{
    int k = 0;
    scanf("%d", &k);
    int n = 0;
    scanf("%d", &n);
    printf("%d", (n-1)/k + 1);
    printf(" ");
    printf("%d", (n - k*(n/k) + k*( n - k*(n/k) == 0 ) ));
    return 0;
}