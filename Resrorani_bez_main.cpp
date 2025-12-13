#include <cstdio>
#include <stdlib.h>
#include <cmath>

typedef struct{
    int cena;
    char neme[100];
}Bludo;

typedef struct{
    char neme[100];
    char adres[100];
    Bludo* menu;
    int Len_menu;
}Restorant;

int new_Restorant(char n, char a, Bludo* m, int l, Restorant* all, int len){  //предпологается, что в main есть массив
    Restorant* now = (Restorant*)malloc((len + 1) * sizeof(Restorant));
    for(i = 0; i < len; i++){
        now[i] = all[i];
    }
    fre(all);
    now[len].neme = n;  //всех ресторанов all; а len -- его длинна 
    now[len].adres = a; // n, a, m, l подаются в нужном формате
    now[len].menu = m; // нумерация с 0, поэтому len -- следующий индекс
    now[len].len_menu = l;
    len = len + 1;
    all = now; // Эти массивы на одной и той же памяти, автоматически Очищаются вместе
}

int add_Bludo(int c, char n, int i, Restorant* all){ // где i индэкс ресторана в all.
    Bludo* new_menu = (Bludo*)malloc((all[i].Len_menu + 1) * sizeof(Bludo));
    for(int j = 0; j < all[i].len_menu; j++){
        new_menu[j] = all[i].menu[j];
    }
    free(all[i].menu);
    new_menu[all[i].Len_menu].cena = c;
    new_menu[all[i].Len_menu].name = n;
    all[i].len_menu = all[i].len_menu + 1;
    all[i].menu = new_menu;
}

int max_menu(Restorant* all, int len){
    int maks = 0;
    char rest = '0';
    for(int i = 0; i < len, i++){
        if (all[i].Len_menu > maks){
            maks = all[i].Len_menu;
            rest = all[i].name;
        }
    }
    printf("%c", rest);
    printf("\n");
    printf("Рaзмер Меню: "); 
    printf("%d", maks); 
    return maks;
}

int print_all_restorant(Restorant* all, int len){
    for(int i = 0; i < len, i++){
        printf("%c", all[i].name);
        printf("\n");
        printf("%c", all[i].adres);
        printf("\n");
        printf("Рaзмер Меню: "); 
        printf("%d", all[i].Len_menu);
        printf("\n");
        for(int j = 0; j < all[i].Len_menu; j++){
            printf("%c", all[i].menu[j]);
            printf("\n");
        }
    }
}

int free_all_memory(Restorant* all, int len){
    for(int i = 0; i < len, i++){
        for(int j = 0; j < all[i].Len_menu; j++){
            free(all[i].menu[j]);
        }
        free(all[i]);
    }
}







