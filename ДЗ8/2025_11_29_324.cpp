#include <cstdio>
#include <stdlib.h>
#include <cmath>

typedef struct{
    double x;
    double y;
}Point;

int main(int argc, char **argv){
    int n = 0;
    scanf("%d ", &n);
    Point* p = (Point*)malloc(n * sizeof(Point));
    double r = 0;
    double max = 0;
    int i = 0;
    while(i < n){
        scanf("%lf", &p[i].x);
        scanf("%lf", &p[i].y);
        i = i + 1;
    }
    i = 0;
    while(i < n){
        int j = i;
        while(j < n){
            r = (p[i].x - p[j].x) * (p[i].x - p[j].x) + (p[i].y - p[j].y) * (p[i].y - p[j].y);
            r = pow(r, 0.5);
            if(r > max){
                max = r;
            }
            j = j + 1;
        }
        i = i + 1;
    }
    
    printf("%lf", max);
    free(p);
    return 0;
}