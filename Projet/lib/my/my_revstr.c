/*
** EPITECH PROJECT, 2018
** my_revstr
** File description:
** my_revstr
*/
#include"../../include/my.h"

char *my_revstr(char *a)
{
    char *b = malloc(sizeof(char) * my_strlen(a) + 1);
    int j = 0;
    for (int i = my_strlen(a); i != 0; i--) {
        b[j] = a[i];
        j++;
    }
    b[j] = '\0';
    return (b);
}
