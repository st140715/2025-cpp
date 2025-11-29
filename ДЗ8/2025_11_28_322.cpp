#include <cstdio>
#include <stdlib.h>

struct Point{
    int x;
    int y;
};

int main(int argc, char **argv){
    struct Point p;
    p.x = 0;
    p.y = 0;
    struct Point ot;
    ot.x = 0;
    ot.y = 0;
    int n = 0;
    scanf("%d ", &n);
    int r = 0;
    int m = 0;
    int i = 0;
    while(i < n){
        scanf("%d", &p.x);
        scanf("%d", &p.y);
        r = p.x * p.x + p.y * p.y;
        if(r > m){
            m = r;
            ot.x = p.x;
            ot.y = p.y;
        }
        i = i + 1;
    }
    
    printf("%d", ot.x);
    printf(" ");
    printf("%d", ot.y);
    return 0;
}