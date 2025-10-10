#include <cstdio>
#include <stdlib.h>

int main(int argc, char **argv) {
    char x1 = 'A';
    scanf("%c", &x1);
    char y1 = 'A';
    scanf("%c", &y1);
    char x2 = 'A';
    scanf("%c", &x2); // Принимаем пробел. В моём компиляторе он не
                      // пропускается, а принимается, поэтому вот так...
    scanf("%c", &x2); // Принимаем действительно нужное значение
    char y2 = 'A';
    scanf("%c", &y2);

    int xod = 0; // Переменная, запомитающая наличие фигуры для принятия решения
                 // о выводе "Nobody"
    if (x1 == x2 || y1 == y2) {
        printf("Rook\n");
        xod = 1;
    }
    if ((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2) == 5) {
        printf("Knight\n");
        return 0; // Туда, куда ходит конь, не ходит ни одна другая фигура.
                  // Программу можно сразу завершить
    }
    if ((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2) < 3) {
        printf("King\n");
        xod = 1;
    }
    if (abs(x1 - x2) == abs(y1 - y2)) {
        printf("Bishop\n");
        xod = 1;
    }
    if ((abs(x1 - x2) == abs(y1 - y2)) || (x1 == x2 || y1 == y2)) {
        printf("Queen\n");
        xod = 1;
    }
    if (((y2 == '4' && y1 == '2') || (y2 - y1 == 1)) && x1 == x2) {
        printf("Pawn\n");
        xod = 1;
    }
    if (xod == 0) {
        printf("Nobody\n");
    }

    // printf("%c\n%c\n%c\n%c\n", x1, y1, x2, y2); // Здесь был отладочный вывод
    return 0;
}