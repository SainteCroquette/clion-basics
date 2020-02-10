/*
** EPITECH PROJECT, 2019
** bsq
** File description:
** Created by croquette
*/

#include <stdlib.h>
#include "bsq.h"

static void put_if_bigger(sol_t *sol, size_t size, size_t cols, size_t offset)
{
    if (size > sol->size) {
        sol->size = size;
        sol->x = offset % cols;
        sol->y = offset / cols;
    }
}

int jump_new_line(char **map, int i, size_t cols)
{
    if (!(i % cols) && ((*map)[i + 1]) != '\n')
        ++(*map);
    else
        return 0;
    return 1;
}

size_t get_min(size_t i, size_t j, size_t k)
{
    return ((i < j) ? ((i < k) ? i : k) : ((j < k) ? j : k));
}

size_t mine_sweeper(int *buffer, char c, int offset, size_t size)
{
    size_t buff_size = size * 2;
    size_t i = 0;
    size_t j = 0;
    size_t k = 0;

    if (c == 'o') {
        buffer[offset % buff_size] = 0;
        return 0;
    }
    i = buffer[(offset + size) % buff_size];
    if (offset % size) {
        j = buffer[(offset + size - 1) % buff_size];
        k = buffer[(offset - 1) % buff_size];
    }
    return (buffer[offset % buff_size] =  (1 + GET_MIN(i, j, k)));
}

int headquarters(char *map, size_t lines, size_t cols, sol_t *sol)
{
    int i = 0;
    size_t bigger;
    int *buffer = malloc(sizeof(int) * (cols * 2));

    if (!buffer)
        return -1;
    while (map[i]) {
        if (map[i] == '\n' && !jump_new_line(&map, i, cols)) {
            free(buffer);
            return -1;
        }
        if (map[i] == '.' || map[i] == 'o') {
            bigger = mine_sweeper(buffer, map[i], i, cols);
            put_if_bigger(sol, bigger, cols, i);
        } else {
            free(buffer);
            return (map[i] || (i / cols != lines)) ? -1 : 0;
        } ++i;
    }
    return (i / cols == lines && map[i] == '\n') ? 0 : -1;
}