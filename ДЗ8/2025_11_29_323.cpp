#include <cstdio>
#include <stdlib.h>

typedef struct{
    double x;
    double y;
}Point;

int main(int argc, char **argv){
    int n = 0;
    scanf("%d ", &n);
    Point* p = (Point*)malloc(n * sizeof(Point));
    Point po;
    po.x = 0.0;
    po.y = 0.0;
    int i = 0;
    while(i < n){
        scanf("%lf", &p[i].x);
        scanf("%lf", &p[i].y);
      
        po.x = po.x + p[i].x;
        po.y = po.y + p[i].y;
        i = i + 1;
    }
    po.x = po.x / n;
    po.y = po.y / n;   
    
    printf("%lf", po.x);
    printf(" ");
    printf("%lf", po.y);
    free(p);
    return 0;
}