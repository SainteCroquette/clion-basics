/*
** EPITECH PROJECT, 2019
** PROJECT_NAME
** File description:
** Created by croquette
*/

#ifndef H_BSQ
#define H_BSQ

#include <stddef.h>

#define GET_MIN(i, j, k)   ((i < j) ? ((i < k) ? i : k) : ((j < k) ? j : k))

typedef struct solution_s {
    size_t x;
    size_t y;
    size_t size;
} sol_t;

int my_atoi(char const *str);
size_t get_file_size(char const *path);
char *get_full_map(char const *path, size_t size);
size_t get_line_count(char const *map);
size_t get_col_count(char const *map);
int headquarters(char *map, size_t lines, size_t cols, sol_t *sol);
size_t mine_sweeper(int *buffer, char c, int offset, size_t size);
void sweep_mines(char *map, sol_t sol, size_t cols);
int bsq(const char *path);
#endif
