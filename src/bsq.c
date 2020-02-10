/*
** EPITECH PROJECT, 2019
** bsq
** File description:
** Created by croquette
*/

#include <stdlib.h>
#include <unistd.h>
#include "bsq.h"

void sweep_mines(char *map, sol_t sol, size_t cols)
{
    size_t i = 0;
    size_t j = 0;

    ++cols;
    while (i < sol.size) {
        j = 0;
        while (j < sol.size) {
            map[(sol.y - i) * cols - j + sol.x] = 'x';
            ++j;
        }
        ++i;
    }
}

static int jump_new_line(const char *str)
{
    int i = 0;

    while (str[i] && str[i] != '\n')
        ++i;
    return (str[i]) ? i + 1 : i;
}

int bsq(const char *path)
{
    size_t file_size = get_file_size(path);
    size_t cols;
    size_t lines;
    size_t map_start;
    sol_t sol = {0, 0, 0};
    char *map;

    if (!file_size)
        return -1;
    if (!(map = get_full_map(path, file_size)))
        return -1;
    lines = get_line_count(map);
    map_start = jump_new_line(map);
    cols = get_col_count(&map[map_start]);
    if (!lines || !cols || headquarters(&map[map_start], lines, cols, &sol)) {
        free(map);
        return -1;
    } sweep_mines(&map[map_start], sol, cols);
    return write(1, &map[map_start], file_size - map_start);
}
