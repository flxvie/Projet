/*
** EPITECH PROJECT, 2019
** projet
** File description:
** Titi
*/
#include "include/my.h"

char **my_realloc_array(char **dtab, int size)
{
    char **new = malloc(sizeof(char *) * size);

    for (int i = 0; dtab[i]; i++)
        new[i] = dtab[i];
    new[size - 1] = 0;
    free (dtab);
    return (new);
}

int write_file(char *str, char *name)
{
    FILE* file_w = NULL;
    file_w = fopen(name, "a");

    if (file_w != NULL) {
        fputs(str, file_w);
        fclose(file_w);
        return (0);
    }
    return (84);
}

int dtab_len(char **dtab)
{
    int i = 0;
    for (; dtab[i]; i++);
    return (i);
}
void vider_f(char *name)
{
    FILE* file_w = NULL;
    file_w = fopen(name, "w");
    if (file_w)
        fclose(file_w);
}

char **change_dtab(char **dtab, int i, char *line)
{
    int new = atoi(dtab[i]) - atoi(line);
    char *str = my_itoa(new);
    *dtab[i] = *str;
    return (dtab);
}

void agendadd(char *str, char **dtab, int mode)
{
    if (mode == 1) {
        my_realloc_array(dtab, dtab_len(dtab) + 2);
        *dtab[dtab_len(dtab)] = *str;
        vider_f("agenda.txt");
        for (int i = 0; dtab[i]; i++)
            write_file(dtab[i], "agenda.txt");
    }
}

int agenda()
{
    system("clear");
    char *line = NULL;
    size_t len = 0;
    
    char **dtab = dtab_maker(file_open("agenda.txt"), '\n');
    for (int i = 0; dtab[i]; i++)
        my_printf("%s\n",dtab[i]);
    my_printf("\033[31;01m1) Ajouter\n2) Vider\n3) Retour\n>\033[00m");
    while (1) {
        if (getline(&line, &len, stdin) == -1)
            exit (84);
        if (atoi(line) <= 3 && atoi(line) >= 1)
            break;
    my_printf("\033[31;01m>\033[00m");    
    }
    if (atoi(line) == 3)
        menu();
    if (atoi(line) == 1) {
         my_printf("\033[31;01m>\033[00m");    
        if (getline(&line, &len, stdin) == -1)
            exit (84);
        write_file(line, "agenda.txt");
    }
    if (atoi(line) == 2) {
        vider_f("agenda.txt");
        write_file("------------------|AGENDA|------------------\n", "agenda.txt");
        write_file("A faire : ", "agenda.txt");
    }
    agenda();
}

int add()
{
    char **dtab = dtab_maker("lundi mardi mercredi jeudi vendredi samedi dimance", ' ');
    //char dtab[7][15] = {"lundi", "mardi", "mercredi", "jeudi", "vendredi", "samedi", "dimanche"};
    char *line = NULL;
    size_t len;
 
    while(1) {
//        my_putchar('>');
        if (getline(&line, &len, stdin) == -1)
            exit(84);
        for (int i = 0; dtab[i]; i++)
            my_printf("salut");
        //break;
    }
    my_printf("donc %s\n", line);
    
}

int e_d_t(void)
{
    char *line = NULL;
    size_t len = 0;
    char **dtab = dtab_maker(file_open("edt.txt"), '\n');
    system("clear");
    for (int i = 0; dtab[i]; i++)
        my_printf("\033[34;01m%s\033[00m\n",dtab[i]);
    my_printf("\033[31;01m1) Ajouter\n2)Supprimer\n3)Quitter\n\n>\033[00m");
    while (1) {
        if (getline(&line, &len, stdin) == -1)
            return (4);
        if (atoi(line) <= 1 && atoi(line) >= 3)
            break;
        my_putchar('>');
    }
    if (atoi(line) == 3)
        menu();
    else if (atoi(line) == 1)
        add();       
}

int finances(void)
{
    system("clear");
    char **dtab = dtab_maker(file_open("finances.txt"), '\n');
    char *line = NULL;
    size_t len = 0;
    
    my_printf("\033[31;01mFinances de %s\n\033[00m\n\n", dtab[0]);
    my_printf("\033[31;01mBudget : %s\n\033[00m\n\n", dtab[1]);
    my_printf("\033[31;01m1) Nouvelle dépense\n2)Retour\033[00m\n", dtab[1]);
    while(1) {
        if (getline(&line, &len, stdin) == -1)
        exit (84);
        if (atoi(line) == 2 || atoi(line) == 1)
            break;
    }
    if (atoi(line) == 1)
        menu();
    else {
        while(1) {
            my_printf(">");
            if (getline(&line, &len, stdin) == -1)
                exit (84);
            if (is_num(line) == 0)
                break;
        }
        write_file(line,"finances.txt");
        dtab = change_dtab(dtab, 1, line);
        vider_f("finances.txt");
        for (int i = 0; dtab[i]; i++)
            write_file(dtab[i], "finances.txt");
    }
    finances();
}


int is_num(char *str)
{
    for (int i = 0; str[i]; i++)
        if (str[i] > 57 || str[i] < 49)
            return (1);
    return (0);
}



int finances_new(void)
{
    char *line = NULL;
    size_t len = 0;
    char *name = NULL;
    system("clear");
    vider_f("finances.txt");
    my_printf("\033[31;01mNom :\033[00m\n");
    my_printf("\033[31;01m>\033[00m");    
    if (getline(&line, &len, stdin) == -1)
        exit(84);
    write_file(line, "finances.txt");
    my_printf("\033[31;01mBudget :\033[00m\n");
    my_printf("\033[31;01m>\033[00m");    
    if (getline(&name, &len, stdin) == -1)
        return (84);
    write_file(name, "finances.txt");
    finances();
}

int finances_choice(void)
{
    system("clear");
    char *line = NULL;
    size_t len;
    my_printf("\033[31;01m----------------|FINANCES|----------------\033[00m\n\n");
    my_printf("\033[31;01m1) Continuer\n2) Nouveau\033[00m\n");
    while(1) {
         my_printf("\033[31;01m>\033[00m\n");
        if (getline(&line, &len, stdin) == -1)
            exit (84);
        if (atoi(line) <= 2 && atoi(line) >= 1)
            break;
    }
    if (atoi(line) == 1)
        finances();
    else if (atoi(line) == 2)
        finances_new();
}

int menu(void)
{
    system("clear");
    char *line = NULL;
    size_t len = 0;
    
    my_printf("\033[31;01m----------------| M E N U |----------------\033[00m\n\n");
    my_printf("\033[31;01m1) AGENDA\n\n2)EMPLOIE DU TEMPS\n\n3)FINANCES\033[00m\n");
    my_printf("\n>");
    while (1) {
        if (getline(&line, &len, stdin) == -1)
            exit(84);
        if (atoi(line) >= 1 && atoi(line) <= 3)
            break;
        my_printf(">");
    }
    if (atoi(line) == 1)
        agenda();
    if (atoi(line) == 2)
        e_d_t();
    if (atoi(line) == 3)
        finances_choice();
}

int main(int ac, char **av)
{
    menu();
    /* if (menu() == 3) */
    /*     finances(); */
}
