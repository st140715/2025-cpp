#include<cstdio>

int main(int argc,char** argv)
{
    int n = 0;
    scanf("%d", &n);
    printf("The next number for the number ");
    printf("%d", n);
    printf( " is ");
    printf("%d", n+1);
    printf(".\n");
    printf("The previous number for the number ");
    printf("%d", n);
    printf( " is ");
    printf("%d", n-1);
    printf(".");
    return 0;
}