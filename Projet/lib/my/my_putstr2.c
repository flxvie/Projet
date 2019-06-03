/*
** EPITECH PROJECT, 2018
** my_putstr2
** File description:
** Thierry_Masumbuko
*/
#include<stdarg.h>
#include"../../include/my.h"

int my_putstr2(va_list list)
{
    my_putstr(va_arg(list, char *));
    return (0);
}
