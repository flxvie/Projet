/*
** EPITECH PROJECT, 2018
** my_octal2
** File description:
** Thierry.Masumbuko
*/
#include<stdarg.h>
#include"../../include/my.h"

int my_octal2 (va_list list)
{
    my_octal(va_arg(list, int));
    return (0);
}
