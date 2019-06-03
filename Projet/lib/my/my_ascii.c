/*
** EPITECH PROJECT, 2018
** my_ascii
** File description:
** Thierry_Masumbuko
*/
#include"../../include/my.h"

void my_ascii (char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 65 && str[i] <= 90 || str[i] >= 97 && str[i] <= 122)
                my_putchar(str[i]);
        else {
            my_putchar('\\');
            my_octal(str[i]);
        }
    }
}

