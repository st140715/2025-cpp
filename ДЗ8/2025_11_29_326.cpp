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
    double per = 0;
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
            int k = j;
            while(k < n){
                
                double ij = (p[i].x - p[j].x) * (p[i].x - p[j].x) + (p[i].y - p[j].y) * (p[i].y - p[j].y);
                ij = pow(ij, 0.5);
                
                double kj = (p[k].x - p[j].x) * (p[k].x - p[j].x) + (p[k].y - p[j].y) * (p[k].y - p[j].y);
                kj = pow(kj, 0.5);

                double ki = (p[k].x - p[i].x) * (p[k].x - p[i].x) + (p[k].y - p[i].y) * (p[k].y - p[i].y);
                ki = pow(ki, 0.5);
    
                per = ij + kj + ki;
                if(per > max){
                    max = per;
                } 
                k = k + 1;
            }
            j = j + 1;
        }
        i = i + 1;
    }
  
    printf("%lf", max);
    free(p);
    return 0;
}