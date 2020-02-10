/*
** EPITECH PROJECT, 2019
** tetris
** File description:
** Created by croquette
*/

#include <stdlib.h>

void my_memset(void *data, char c, size_t bytes)
{
    char *tmp = (char *)data;
    size_t i = 0;

    if (!data)
        return;
    while (i < bytes) {
        tmp[i] = c;
        ++i;
    }
}

void *my_memset_malloc(size_t size, char byte)
{
    void *ptr = malloc(size);

    my_memset(ptr, byte, size);
    return ptr;
}