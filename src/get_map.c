/*
** EPITECH PROJECT, 2019
** bsq
** File description:
** Created by croquette
*/

#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "bsq.h"

size_t get_file_size(char const *path)
{
    struct stat buff;

    if (stat(path, &buff) < 0)
        return 0;
    if (!S_ISREG(buff.st_mode))
        return 0;
    return buff.st_size;
}

char *get_full_map(char const *path, size_t size)
{
    char *str;
    int fd = open(path, O_RDONLY);
    int bytes;

    if (fd < 0)
        return NULL;
    if (!(str = malloc(sizeof(char) * (size + 1)))) {
        close(fd);
        return NULL;
    }
    bytes = read(fd, str, size);
    if (bytes <= 0) {
        free(str);
        str = NULL;
    } else
        str[bytes] = '\0';
    close(fd);
    return str;
}

size_t get_line_count(char const *map)
{
    int i = 0;

    while (map[i] && map[i] >= '0'&& map[i] <= '9')
        ++i;
    if (map[i] != '\n')
        return 0;
    return my_atoi(map);
}

size_t get_col_count(char const *map)
{
    size_t i = 0;

    while (map[i] && map[i] != '\n')
        ++i;
    if (map[i] != '\n')
        return 0;
    return i;
}