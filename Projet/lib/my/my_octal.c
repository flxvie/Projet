/*
** EPITECH PROJECT, 2018
** my_octal
** File description:
** Thierry.Masumbuko
*/
#include"../../include/my.h"

int my_strlein (char *str) {
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++)
        j++;
    return (j);
}

void rev (char *str)
{
    for (int i = my_strlein(str) ; i >= 0; i--)
        my_putchar(str[i]);
}


void my_octal (int i)
{
    char *str = malloc(sizeof(char) * 100);
    int j = 1;
    int l = 0;
    for (int k = 0; i != 0; k++)
    {
        j = i%8;
        str[l] = (j + '0');
        i = i/8;
        l++;
    }
    if (my_strlein(str) == 1)
        my_putstr("00");
    if (my_strlein(str) == 2)
        my_putchar('0');
    rev(str);
}

