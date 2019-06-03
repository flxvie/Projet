/*
** EPITECH PROJECT, 2018
** my_put_nbr
** File description:
** my_put_nbr
*/
#include"../../include/my.h"

int  my_put_nbr(int variable)
{
    int i = 1;

    if (variable >= 0)
        variable = variable * -1;
    else
        my_putchar('-');
    while ((variable / i) <= -9)
        i = i * 10;
    i = i * -1;
    while (i != 0) {
        my_putchar(((variable) / i) + '0');
        variable %= i;
        i /= 10;
    }
    return (0);
}

