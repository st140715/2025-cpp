#include<cstdio>

int main(int argc,char** argv)
{
    int n = 0;
    scanf("%d", &n);
    if(n == 1){
        printf("%d\n", 0);
    }
    else if(n%2 == 1){
        printf("%d\n", n);
    }
    else{
        printf("%d\n", n/2);
    }
    return 0;
}