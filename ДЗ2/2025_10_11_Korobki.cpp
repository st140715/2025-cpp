#include <cstdio>

int main(int argc, char **argv) {
    int a = 0;
    scanf(" %d", &a);
    int b = 0;
    scanf(" %d", &b);
    int c = 0;
    scanf(" %d", &c);
    int a1 = a;
    int b1 = b;
    int c1 = c;
    if (b >= c){
        if (a >= b){ // Сортируем а1, б1, с1
            a1 = a;
            b1 = b;
            c1 = c;
        } 
        else if (c >= a){
            a1 = b;
            b1 = c;
            c1 = a;
        } 
        else{
            a1 = b;
            b1 = a;
            c1 = c;
        }
    }
    else{
        if (a >= c){
            a1 = a;
            b1 = c;
            c1 = b;
        } 
        else if (b >= a){
            a1 = c;
            b1 = b;
            c1 = a;
        } 
        else{
            a1 = c;
            b1 = a;
            c1 = b;
        }
    }
    scanf(" %d", &a);
    scanf(" %d", &b);
    scanf(" %d", &c);
    int a2 = a;
    int b2 = b;
    int c2 = c;
    if (b >= c){
        if (a >= b){    // Сортируем а2, б2, с2
            a2 = a;
            b2 = b;
            c2 = c;
        } 
        else if (c >= a){
            a2 = b;
            b2 = c;
            c2 = a;
        } 
        else{
            a2 = b;
            b2 = a;
            c2 = c;
        }
    }
    else{
        if (a >= c){
            a2 = a;
            b2 = c;
            c2 = b;
        } 
        else if (b >= a){
            a2 = c;
            b2 = b;
            c2 = a;
        } 
        else{
            a2 = c;
            b2 = a;
            c2 = b;
        }
    }

    if (a1 == a2 && b1 == b2 && c1 == c2){
        printf("Boxes are equal");
    }
    else if (a1 <= a2 && b1 <= b2 && c1 <= c2){
        printf("The first box is smaller than the second one");
    }
    else if (a1 >= a2 && b1 >= b2 && c1 >= c2){
        printf("The first box is larger than the second one");
    }
    else{
        printf("Boxes are incomparable");
    }
    
        return 0;
    }