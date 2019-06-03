/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** Thierry_Masumbuko
*/
#include<stdarg.h>
#include<stdio.h>
#include"../../include/my.h"
#include<stdlib.h>
#include<unistd.h>
ptr_fct ptr_detection[9] = {
    {'d', &my_put_nbr2},
    {'x', &my_hexa2},
    {'i', &my_put_nbr2},
    {'c', &my_putchar2},
    {'s', &my_putstr2},
    {'S', &my_ascii2},
    {'b', &my_binary2},
    {'o', &my_octal2},
    {'z', 0}
};

void my_printf(char *str, ...)
{
    int i = 0;
    va_list list;
    va_start (list, str);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '%') {
            i++;
            for (int j = 0; ptr_detection[j].percent != 'z'; j++) {
                if (str[i] == ptr_detection[j].percent)
                    (ptr_detection[j].print_fct)(list);
            }
        } else
            my_putchar(str[i]);
    }

    va_end(list);
}
