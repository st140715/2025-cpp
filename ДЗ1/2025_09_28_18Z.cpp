#include<cstdio>

int main(int argc,char** argv)
{
    int a = 0;
    scanf("%d", &a);
    int b = 0;
    scanf("%d", &b);
    printf("%d\n", 1 + ( a - b * (a / b) ) * ( b - a * (b / a) ) );
    return 0;
}