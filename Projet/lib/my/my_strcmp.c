/*
** EPITECH PROJECT, 2018
** my_strcmp
** File description:
** my_strcmp
*/
#include"../../include/my.h"

int my_strlen(char *str)
{
    return ((*str) ? (1 + my_strlen(++str)) : 0);
}

int my_strcmp(char *s1, char *s2)
{
    if (my_strlen(s1) != my_strlen(s2))
        return (1);
    for (int i  = 0; s1[i]; i++)
        if (s1[i] != s2[i])
            return (1);
    return (0);
}
