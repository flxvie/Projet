/*
** EPITECH PROJECT, 2019
** Epitech
** File description:
** Epitech
*/

#include "../../include/my.h"

char *file_open(char *av)
{
    int fd;
    int size;
    char *buffer;
    struct stat stats;

    if (stat(av, &stats) < 0)
        exit(84);
    fd = open(av, O_RDONLY);
    size = stats.st_size;
    if (size < 1)
        exit(84);
    buffer = malloc(sizeof(char) * (size + 1));
    if (buffer == NULL)
        exit(84);
    read(fd, buffer, size);
    close(fd);
    buffer[size] = 0;
    return (buffer);
}
