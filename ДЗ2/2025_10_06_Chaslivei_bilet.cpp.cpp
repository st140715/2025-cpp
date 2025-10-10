#include<cstdio>

int main(int argc,char** argv)
{
    int n = 0;
    scanf("%d", &n);
    int a = n%10;
    n = n/10;
    int b = n%10;
    n = n/10;
    int c = n%10;
    n = n/10;
    int d = n%10;
    n = n/10;
    int e = n%10;
    n = n/10;
    int f = n%10;
    n = n/10;
    if(a+b+c == d+e+f){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}