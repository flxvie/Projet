/*
** EPITECH PROJECT, 2018
** my_hexa
** File description:
** Thierry Masumbuko
*/
#include"../../include/my.h"
#include<stdarg.h>

int my_hexa2 (va_list list)
{
    my_hexa(va_arg(list, int));
    return (0);
}
