#include <cstdio>
#include <stdlib.h>
#include <cmath>
#include <cstring>

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


int add_Bludo(int c, char n[100], int i, Restorant* all){ // где i индэкс ресторана в all.
    Bludo* new_menu = (Bludo*)malloc((all[i].Len_menu + 1) * sizeof(Bludo));
    for(int j = 0; j < all[i].Len_menu; j++){
        new_menu[j] = all[i].menu[j];
    }
    free(all[i].menu);
    new_menu[all[i].Len_menu].cena = c;
    strcpy(new_menu[all[i].Len_menu].neme, n);
    all[i].Len_menu = all[i].Len_menu + 1;
    all[i].menu = new_menu;
    return 0;
}

int max_menu(Restorant* all, int len){
    int maks = 0;
    char rest[100];
    for(int i = 0; i < len; i++){
        if (all[i].Len_menu > maks){
            maks = all[i].Len_menu;
            strcpy(rest, all[i].neme);
        }
    }
    printf("Рекорцмен по длинне меню: "); 
    printf("%s", rest);
    printf("\n");
    printf("Рaзмер Меню: "); 
    printf("%d", maks);
    printf("\n");
    printf("\n");
    return maks;
}

int print_all_restorant(Restorant* all, int len){
    printf("Список всех ресторанов: ");
    printf("\n");
    for(int i = 0; i < len; i++){
        printf("    Название: ");
        printf("%s", all[i].neme);
        printf("\n");
        printf("    Адрес: ");
        printf("%s", all[i].adres);
        printf("\n");
        //printf("    Рaзмер Меню: "); //раскоментируйте, если хотите
        //printf("%d", all[i].Len_menu); //увидеть размер меню
        printf("    Меню: "); 
        printf("\n");
        for(int j = 0; j < all[i].Len_menu; j++){
            printf("        ");
            printf("%s", all[i].menu[j].neme);
            printf(" ");
            printf("%d", all[i].menu[j].cena);
            printf("\n");
        }
    }
    printf("\n");
    return 0;
}

int free_all_memory(Restorant* all, int len){
    for(int i = 0; i < len; i++){
        free(all[i].menu);
    }
    free(all);
    return 0;
}

void clear_input_buffer() { //очистка ввода. почему то без этого scanf("%d", &i); в main ведёт себя странно.
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main(int argc, char **argv){
    Restorant Idebo;
    strcpy(Idebo.neme, "Idebo");
    strcpy(Idebo.adres, "Zdes");
    Idebo.Len_menu = 2;
    Idebo.menu = (Bludo*)malloc(Idebo.Len_menu * sizeof(Bludo));
    strcpy(Idebo.menu[0].neme, "Kotleta");
    Idebo.menu[0].cena = 50;
    strcpy(Idebo.menu[1].neme, "Sup");
    Idebo.menu[1].cena = 30;

    Restorant Atreio;
    strcpy(Atreio.neme, "Atreio");
    strcpy(Atreio.adres, "Tam");
    Atreio.Len_menu = 2;
    Atreio.menu = (Bludo*)malloc(Atreio.Len_menu * sizeof(Bludo));
    strcpy(Atreio.menu[0].neme, "Apple");
    Atreio.menu[0].cena = 5;
    strcpy(Atreio.menu[1].neme, "jam");
    Idebo.menu[1].cena = 17;

    int len = 2;
    Restorant* all = (Restorant*)malloc((len) * sizeof(Restorant));
    all[0] = Idebo;
    all[1] = Atreio;

    int cena = 0;
    printf("Введите стоимость блюда: ");
    fflush(stdout); // чтобы данные сразу выводильсь. без этой команды 
    scanf("%d", &cena);  // printf выводит сообщение только после scanf
    char neme[100];
    printf("Введите название блюда: ");
    fflush(stdout);
    scanf("%99s", &neme);
    int i = 0;
    printf("Введите 0, если хотите добавить это блюлдо в меню Ыдебо");
    fflush(stdout);
    printf("\n");
    printf("Введите 1, если хотите добавить это блюлдо в меню Атрейо \n");
    fflush(stdout);
    clear_input_buffer(); // без этого scanf("%d", &i); не ждёт ввода.
    scanf("%d", &i);

    printf("\n");

    add_Bludo(cena, neme, i, all);

    max_menu(all, len);

    print_all_restorant(all, len);

    free_all_memory(all, len);
    
    return 0;
}