/*
** EPITECH PROJECT, 2019
** PROJECT_NAME
** File description:
** Created by croquette
*/

#include <criterion/criterion.h>
#include <stddef.h>
#include "bsq.h"

char test_map[] = ".........o\n"
                         "..........\n"
                         "........o.\n"
                         ".o..o.....\n"
                         "..........\n"
                         ".......o..\n"
                         "o.........\n"
                         "..........\n"
                         ".....o....\n"
                         "....o..o..\n";

Test(headquarters, basic_test)
{
    sol_t sol = {4, 7, 4};
    sol_t my_sol = {0};

    cr_assert_eq(headquarters(test_map, 10, 10, &my_sol), 0);
    cr_assert_eq(my_sol.x, sol.x);
    cr_assert_eq(my_sol.y, sol.y);
    cr_assert_eq(my_sol.size, sol.size);
}

Test(headquarters, one_one_empty_test)
{
    char map[] = ".\n";
    sol_t sol = {0, 0, 1};
    sol_t my_sol = {0};

    cr_assert_eq(headquarters(map, 1, 1, &my_sol), 0);
    cr_assert_eq(my_sol.x, sol.x);
    cr_assert_eq(my_sol.y, sol.y);
    cr_assert_eq(my_sol.size, sol.size);
}

Test(headquarters, one_one_full_test)
{
    char map[] = "o\n";
    sol_t sol = {0, 0, 0};
    sol_t my_sol = {0};

    cr_assert_eq(headquarters(map, 1, 1, &my_sol), 0);
    cr_assert_eq(my_sol.x, sol.x);
    cr_assert_eq(my_sol.y, sol.y);
    cr_assert_eq(my_sol.size, sol.size);
}

Test(headquarters, basic_failure)
{
    char map[] = "o..oo.d.oo\n";
    sol_t my_sol = {0};

    cr_assert_eq(headquarters(map, 1, 10, &my_sol), -1);
}

Test(headquarters, failure_col_min)
{
    char map[] = "o..oooo\n";
    sol_t my_sol = {0};

    cr_assert_eq(headquarters(map, 1, 10, &my_sol), -1);
}

Test(headquarters, failure_col_max)
{
    char map[] = "o..oooo.........\n";
    sol_t my_sol = {0};

    cr_assert_eq(headquarters(map, 1, 10, &my_sol), -1);
}

Test(headquarters, failure_line_min)
{
    char map[] = "o..o\n"
                 "...o\n"
                 "...o\n";
    sol_t my_sol = {0};

    cr_assert_eq(headquarters(map, 10, 4, &my_sol), -1);
}

Test(headquarters, failure_line_max)
{
    char map[] = "o..o\n"
                 "...o\n"
                 "...o\n"
                 "...o\n";
    sol_t my_sol = {0};

    cr_assert_eq(headquarters(map, 2, 4, &my_sol), -1);
}

Test(headquarters, failure_missing_trailing_new_line)
{
    char map[] = "o..o";
    sol_t my_sol = {0};

    cr_assert_eq(headquarters(map, 1, 4, &my_sol), -1);
}