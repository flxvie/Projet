/*
** EPITECH PROJECT, 2018
** my_ascii2
** File description:
** Thierry_Masumbuko
*/
#include <stdarg.h>
#include"../../include/my.h"

int my_ascii2(va_list list)
{
    my_ascii(va_arg (list, char *));
    return (0);
}
