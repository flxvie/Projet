/*
** EPITECH PROJECT, 2018
** my_hexa
** File description:
** Thierry Masumbuko
*/
#include<unistd.h>
#include<stdlib.h>
#include"../../include/my.h"

char convert(int i)
{
    int j = 0;
    if (i > 9) {
    	j = i - 9;
    	return ('a' + j);
    } else
    return (i);
}

void my_hexa (int i)
{
    char *result = malloc(sizeof(char) * 1000);
    int w = 0;
    while (i / 16 != 0) {
        result[w] = convert(i%16);
        i = i/16;
        w++;
    }
    my_putstr(result);
}

