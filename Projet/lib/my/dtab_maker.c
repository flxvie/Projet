/*
** EPITECH PROJECT, 2019
** cut
** File description:
** Titi_lib
*/
#include "../../include/my.h"

void put_dtab(char **dtab)
{
    for (int i = 0; dtab[i]; i++) {
        my_putstr(dtab[i]);
        my_putchar('\n');
    }
}

int back(char *str, char c)
{
        int back_n = 0;
        for (int i = 0; str[i] != 0; i++) {
                if (str[i] == c)
                        back_n++;
        }
        return (back_n);
}

char **tab_filler(char *str, char **dtab, char c)
{
        int j = 0;
        int k = 0;
        for (int i = 0; str[i] != 0; i++, k++) {
                if (str[i] == c) {
                        dtab[j][k] = 0;
                        k = 0;
                        i++;
                        j++;
                }
                if (str[i] == 0)
                        break;
                dtab[j][k] = str[i];
        }
        return (dtab);
}

char **dtab_maker(char *str, char c)
{
        int incre = 0;
        int size = 0;
        char **dtab = malloc(sizeof(char *) * back(str, c) + 1);
        for (int i = 0; str[i] != 0; i++, size++) {
                if (str[i] == c) {
                        dtab[incre] = malloc(sizeof(char) * (size + 1));
                        incre++;
                        size = 0;
                        i++;
                }
                if (str[i] == 0)
                        break;
        }
        dtab[incre] = malloc(sizeof(char) * (size + 1));
        dtab[incre + 1] = malloc(sizeof(char) * (size + 1));
        dtab[incre + 1] = 0;
        return (tab_filler(str, dtab, c));
}
