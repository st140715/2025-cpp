#include <cstdio>
#include <stdlib.h>

int main(int argc, char **argv){
    int n = 0;
    scanf("%d", &n);
    int a = 0;
    scanf("%d", & a);
    int b = 0;
    scanf("%d", & b);
    int c = 0;
    scanf("%d", & c);
    int d = 0;
    scanf("%d", & d);
    int u = 0;
    for (int i = 0; i < n; i++){
        if (i + 1 < c or i + 1 > d){
            if (i + 1 < a or i + 1 > b){
                printf("%d ", i + 1);
            }
            else{
                printf("%d ", b - i + a - 1);
            }
        }
        else{
            u = d - i + c - 2;
            if (u + 1 < a or u + 1 > b){
                printf("%d ", u + 1);
            }
            else{
                printf("%d ", b - u + a - 1);
            }
        }
    }
 
    return 0;
}