/*
** EPITECH PROJECT, 2018
** my_binary2
** File description:
** Thierry.Masumbuko
*/
#include <stdarg.h>
#include"../../include/my.h"

void my_binary2 (va_list list)
{
    my_binary(va_arg(list, unsigned int));
}

