/*
** EPITECH PROJECT, 2018
** my_putnbr2
** File description:
** Thierry_Masumbuko
*/
#include<stdarg.h>
#include"../../include/my.h"

int my_put_nbr2(va_list list)
{
    my_put_nbr(va_arg(list, int));
    return (0);
}
