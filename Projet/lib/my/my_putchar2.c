/*
** EPITECH PROJECT, 2018
** my_putchar2
** File description:
** Thierry_Masumbuko
*/
#include<stdarg.h>
#include"../../include/my.h"

int my_putchar2(va_list list)
{
    my_putchar(va_arg(list, int));
    return (0);
}
