/*
** EPITECH PROJECT, 2018
** include
** File description:
** include
*/
#include<stdarg.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <math.h>

char *my_itoa(int);
char *file_open(char *);
char **dtab_maker(char *, char);
void my_putchar(char c);
void my_octal (int i);
void my_binary (unsigned int i);
int my_strlen(char *str);
char *my_revstr(char *a);
void my_printf(char *str, ...);
int my_octal2 (va_list list);
int my_hexa2 (va_list list);
void my_binary2 (va_list list);
int my_put_nbr2(va_list list);
int my_putchar2(va_list list);
int my_putstr2(va_list list);
int my_ascii2(va_list list);
void my_octal (int i);
void my_hexa(int i);
void my_ascii (char *str);
void my_putchar(char c);
int my_put_nbr(int nb);
int my_strcmp(char *, char *);
int my_strncmp(char const *s1, char const *s2, int n);
void my_putstr(char *str);
void my_ascii (char *str);
typedef struct ptr_fct
{
    char percent;
    int (*print_fct )(va_list list);
}ptr_fct;


