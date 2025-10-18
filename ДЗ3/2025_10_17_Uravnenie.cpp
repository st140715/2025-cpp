int main(int argc, char **argv) {
    int a = 0;
    scanf("%d", &a);
    int b = 0;
    scanf("%d", &b);
    int c = 0;
    scanf("%d", &c);
    int d = 0;
    scanf("%d", &d);
    int x = -100;
    while (1) {
        if ((a * x * x * x) + (b * x * x) + (c * x) + d == 0){
            printf("%d\n", x);
        }
        if (x == 100){
            return 0;
        }
        x = x + 1;
    }
    return 0;
}