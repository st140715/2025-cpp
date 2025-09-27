#include<cstdio>

int main(int argc,char** argv)
{
    int k = 0;
    scanf("%d", &k);
    int n = 0;
    scanf("%d", &n);
    printf("%d", (n-1)/k + 1);
    printf(" ");
    if( n - k*(n/k) == 0){
        printf("%d", k);
    }
    else{
        printf("%d", n - k*(n/k) );
    }
    return 0;
}