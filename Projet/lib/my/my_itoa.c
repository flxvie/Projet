/*
** EPITECH PROJECT, 2018
** my_itoa
** File description:
** my_itoa
*/
#include <stdio.h>
#include <stdlib.h>
#include "../../include/my.h"

char *my_itoa(int nb)
{
    int i = 0;
    int res = 0;
    char *str = malloc(sizeof(char) * nb);

    if (nb >= 0 && nb <= 9) {
        str[0] = nb + '0';
        str[1] = '\0';
        return (str);
    }
    else if (nb >= 10)
        while (nb != 0) {
            res = nb % 10;
            str[i] = res + '0';
            i++;
            nb = nb / 10;
        }
    str[i] = '\0';
    my_revstr(str);
    str[i] = '\0';
    return (str);
}