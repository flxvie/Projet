/*
** EPITECH PROJECT, 2018
** my_binary
** File description:
** Thierry.Masumbuko
*/
#include"../../include/my.h"

void  my_swapp(char *a, char *b)
{
    char premier = 0;
    premier = *a;
    *a = *b;
    *b = premier;
}

void my_binary (unsigned int i)
{
    char *str = malloc(sizeof(char) * 100);
    int j = 1;
    int l = 0;
    for (int k = 0; i != 0; k++)
    {
        j = i%2;
        if (j == 0)
            str[l] = '0';
        else
            str[l] = '1';
        i = i/2;
        l++;
        my_putstr(my_revstr(str));
    }
}
